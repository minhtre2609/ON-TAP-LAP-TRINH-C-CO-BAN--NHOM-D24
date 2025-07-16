#include <stdio.h>
#include <math.h>

int main ()
{
	int n, m, p;
	scanf ("%d %d %d", &n, &m, &p);
	
	int a[n][m];
	int b[m][p];
	int c[n][p];
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf ("%d", &a[i][j]);
		}
	}
	
	for (int j = 0; j < m; j++)
	{
		for (int k = 0; k < p; k++)
		{
			scanf ("%d", &b[j][k]);
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < p; k++)
		{
			c[i][k] = 0;
			for (int j = 0; j < m; j++)
			{
				c[i][k] += a[i][j] * b[j][k];
			}
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < p; k++)
		{
			printf ("%d ", c[i][k]);
		}
		printf ("\n");
	}
}
