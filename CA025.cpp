#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int sum (int n)
{
	long long s = 0;														 
	while (n > 0)
	{
		s += (n % 10);
		n /= 10;
	}
	return s;
}

int main ()
{
	int n;
	scanf ("%d", &n);
	
	while (sum(n) % 4 != 0)
	{
		n++;
	}
	
	printf ("%d", n);
	return 0;
}
