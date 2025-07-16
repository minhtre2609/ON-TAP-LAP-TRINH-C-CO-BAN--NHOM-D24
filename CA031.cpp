#include <stdio.h>
#include <math.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	
	while (t--)
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
		
		int dx = 1;
		for (int i = 0; i < n && dx; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (a[i][j] != a[j][i])
				{
					dx = 0;
					break;
				}
			}
		}
		
		if (dx)
		{
			printf ("YES\n");
		}
		else
		{
			printf ("NO\n");
		}
	}
}
