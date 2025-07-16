#include <stdio.h>

int main ()
{
	int n, m;
	scanf ("%d %d", &n, &m);
	
	int a[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf ("%d", &a[i][j]);
		}
	}
	
	if (n > m)
	{
		int xoa = n - m;
		int r = 0;
		for (int i = 0; i < n; i++)
		{
			if ((i + 1) % 2 == 1 && xoa > 0)
			{
				xoa--;
				continue;
			}
			for (int j = 0; j < m; j++)
			{
				a[r][j] = a[i][j];
			}
			r++;
		}
		n = r;
	}
    else if (m > n)
	{
		int xoa = m - n;
		int c[50], k = 0;
		for (int j = 0; j < m; j++)
		{
			if ((j + 1) % 2 == 0 && xoa > 0)
			{
				xoa--;
				continue;
		    }
		    c[k++] = j;
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < k; j++)
			{
				a[i][j] = a[i][c[j]];
			}
		}
		m = k;
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf ("%d ", a[i][j]);
		}
		printf ("\n");
	}
	
	return 0;
	
}
