#include <stdio.h>

int main ()
{
	int n, a;
	scanf ("%d", &n);
	
	int mark[30005] = {0};
	for (int i = 0; i < n; i++)
	{
		scanf ("%d", &a);
		mark[a] = 1;
	}
	
	for (int i = 1; i <= 30000; i++)
	{
		if (mark[i] == 0)
		{
			printf ("%d\n", i);
			return 0;
		}
	}
	
	printf ("%d\n", n + 1);
	return 0;
}
