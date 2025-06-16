#include <stdio.h>

int is_prime(int n) 
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

void swap(int *a, int *b) 
{
    int t = *a; 
	*a = *b; 
	*b = t;
}

int main() 
{
    int n, a[100], prime[100], idx[100], cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);
        if (is_prime(a[i])) 
		{
            prime[cnt] = a[i];
            idx[cnt++] = i;
        }
    }

    for (int i = 0; i < cnt - 1; i++)
        for (int j = i + 1; j < cnt; j++)
            if (prime[i] > prime[j])
                swap(&prime[i], &prime[j]);

    for (int i = 0; i < cnt; i++)
        a[idx[i]] = prime[i];

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

