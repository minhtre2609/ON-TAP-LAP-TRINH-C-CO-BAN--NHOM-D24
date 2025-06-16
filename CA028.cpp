#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
	int n;
	scanf ("%d", &n);
	
	int x;
	long long sum = 0;
	for (int i = 1; i <= n; i++)
	{
		scanf ("%d", &x);
		if (i % 2 == 0)
		{
			sum += x;
		}
	}
	
	printf ("%lld", sum);
	return 0;
}
