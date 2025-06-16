#include <stdio.h>

int gcd(int a, int b) 
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main ()
{
	int t;
	scanf ("%d", &t);
	
	while (t--)
	{
		int n;
		scanf ("%d", &n);
		
		long long cnt = 0;
		for (int i = 1; i <= n; i++)
		{
			if (gcd(i, n) == 1)
			{
				cnt++;
			}
		}
		
		printf ("%lld\n", cnt);	
	}
}
