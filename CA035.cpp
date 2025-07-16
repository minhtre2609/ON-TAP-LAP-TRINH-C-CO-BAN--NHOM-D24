#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
	int n;
	scanf ("%d", &n);
	
	int a[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf ("%d", &a[i][j]);
		}
	}
	
	int k;
	scanf ("%d", &k);
	
	int tongtren = 0, tongduoi = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i > j) 
			{
				tongduoi += a[i][j];
			}
			else if (i < j)
			{
				tongtren += a[i][j];
			}
		}
	}
	
	int dochenhlech = abs(tongtren - tongduoi);
	if (dochenhlech <= k)
	{
		printf ("YES\n");
	}
	else if (dochenhlech > k)
	{
		printf ("NO\n");
	}
	
	printf ("%d", dochenhlech);
}
