#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

long long thuan_nghich(long long n)
{
    long long m = 0, tmp = n;
    while(n != 0)
	{
        m = m * 10 + n % 10; 
        n /= 10;
    }
    if(tmp == m)
	{ 
        return 1;
    }
    return 0;
}

int main ()
{
	long long n;
	int k;
	scanf ("%lld %d", &n, &k);
	
	long long i = pow(10, k);
	if (thuan_nghich(n % i))
	{
		printf ("YES");
	}
	else 
	{
		printf ("NO");
	}
	
}
