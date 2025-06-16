#include <stdio.h>
#include <math.h>

int prime (int n)
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

int seen_before(int arr[], int pos, int val) 
{
    for (int i = 0; i < pos; i++)
        if (arr[i] == val) return 1;
    return 0;
}

int main() 
{
    int n;
    scanf("%d", &n);
    int a[500];
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) 
	{
        if (prime(a[i]) && !seen_before(a, i, a[i])) 
		{
            int count = 0;
            for (int j = 0; j < n; j++) 
			{
                if (a[j] == a[i]) count++;
            }
            printf("%d %d\n", a[i], count);
        }
    }

    return 0;
}


