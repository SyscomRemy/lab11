#include <stdlib.h>
#include <stdio.h>
#include "variance.h"

void variance(int tab[],int n, float *var)

{
	float vari=0;
	float M=0;
	for (int i=0;i<n;i++)
	{
		M=tab[i]+M;
	}
	M=M/n;
       	for (int i=0;i<n;i++)
       	{
               vari=(tab[i]-M)*(tab[i]-M)+vari;
        
	}
	*var =(1/(float)n)* vari;
	
}


