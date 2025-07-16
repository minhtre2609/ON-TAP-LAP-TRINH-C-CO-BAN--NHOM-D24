#include <stdio.h>
#include <math.h>

int is_prime (int n)
{
	if (n == 2 || n == 3)
	{
		return 1;
	}
	
	if (n < 2 || n % 2 == 0 || n % 3 == 0)
	{
		return 0;
	}
	
	for (int i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int max_prime = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (is_prime(a[i][j]) && a[i][j] > max_prime)
            {
                max_prime = a[i][j];
            }
        }
    }

    if (max_prime == -1)
    {
        printf("NOT FOUND\n");
    }
    else
    {
        printf("%d\n", max_prime);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == max_prime)
                {
                    printf("Vi tri [%d][%d]\n", i, j);
                }
            }
        }
    }

    return 0;
}

