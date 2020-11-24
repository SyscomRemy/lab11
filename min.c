#include <stdlib.h>
#include <stdio.h>
#include "min.h"

void min(int tab[],int n, int *min)

{
for (int i=0;i<n;i++)
{
if(tab[i] < *min)
{
      *min=tab[i];
}
}

}

