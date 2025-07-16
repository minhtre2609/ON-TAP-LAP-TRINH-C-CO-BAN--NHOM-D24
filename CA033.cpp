#include <stdio.h>
#include <math.h>

int main ()
{
	int n;
	scanf ("%d", &n);
	
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		int a, b, c;
		scanf ("%d %d %d", &a, &b, &c);
		
		int sum = a + b + c;
		if (sum >= 2)
		{
			cnt++;
		}
	}
	printf ("%d", cnt);
}
