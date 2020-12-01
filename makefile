CC=gcc
OBJ=max.o min.o variance.o

ifeq (${DEBUG},yes)
	CC_OPTIONS=-g -Wall
	MODE= Mode Debug
else
	CC_OPTIONS=
	MODE= Mode Release
endif

mode : test.exe
	@echo "$(MODE)"

max.o : max.c
	${CROSS_COMPILE}${CC} ${CC_OPTIONS} -c $^
min.o : min.c
	${CROSS_COMPILE}${CC} ${CC_OPTIONS} -c $^

variance.o : variance.c
	${CROSS_COMPILE}${CC} ${CC_OPTIONS} -c $^

test.o : test.c
	${CROSS_COMPILE}${CC} ${CC_OPTIONS} -c $^

test.exe : test.o ${OBJ}
	${CROSS_COMPILE}${CC} ${CC_OPTIONS} -o $@ $< ${OBJ}

clean: *.o
	@rm *.o
	
install : test.exe
	mv $< $(HOME)
