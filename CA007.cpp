#include <stdio.h>
#include <string.h>

long long gcd(long long a, long long b) 
{
    while (b) 
	{
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() 
{
    int T;
    scanf("%d", &T);
    while (T--) 
	{
        char N[20];
        scanf("%s", N);
        int len = strlen(N);
        if (len % 2 != 0) 
		{
            printf("INVALID\n");
        } 
		else 
		{
            long long a = 0, b = 0;
            for (int i = 0; i < len / 2; i++)
            {
            	a = a * 10 + (N[i] - '0');
			}
            for (int i = len / 2; i < len; i++)
            {
            	b = b * 10 + (N[i] - '0');
			}
            printf("%lld\n", gcd(a, b));
        }
    }
    return 0;
}

