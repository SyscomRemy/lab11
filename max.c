#include <stdlib.h>
#include <stdio.h>
#include "max.h"

void max(int tab[],int n, int *max)

{
for (int i=0;i<n;i++)
{
if(tab[i] > *max)
{
      *max=tab[i];
}
}

}
