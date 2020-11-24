#include <stdlib.h>
#include <stdio.h>
#include "max.h"
#include "min.h"
#include "variance.h"

int main()
{
	int tab[10]={4,9,10,11,12,15,12,9,0,30};
	int maxi=0;
	int mini=100;
	float var;
	max(tab,10,&maxi);
	min(tab,10,&mini);
	variance(tab,10,&var);
	printf("La maximum est :%d \n",maxi);
	printf("La minimum est :%d \n",mini);
	printf("La variance :%f \n",var);



	return 0;
}

