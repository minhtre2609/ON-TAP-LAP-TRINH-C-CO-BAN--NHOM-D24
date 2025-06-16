#include <stdio.h>

int main ()
{
	int n;
	scanf ("%d", &n);
	
	if (n > 10000)
	{
		return 0;
	}
	
	if (n % 2 == 0)
	{
		printf ("CHAN");
	}
	else
	{
		printf ("LE");
	}
	
	return 0;
}
