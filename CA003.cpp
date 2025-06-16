#include <stdio.h>

int main ()
{
	long long n;
	long long maxx = -1e18;
	
	while (scanf ("%lld", &n) == 1)
	{
		if (n > maxx)
		{
			maxx = n;
		}
	}
	
	printf ("%lld", maxx);
	return 0;
}
