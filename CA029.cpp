#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
	int a, b;
	scanf ("%d %d", &a, &b);
	
	long long F[100];
	F[1] = F[2] = 1;
	
	for (int i = 3; i <= b; i++)
	{
		F[i] = F[i-1] + F[i-2];
	}
	
	long long sum = 0;
	for (int i = a; i <= b; i++)
	{
		sum += F[i];
	}
	
	printf ("%lld", sum);
	return 0;
}
