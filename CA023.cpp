#include <stdio.h>

int main ()
{
	int n;
	scanf ("%d", &n);
	
	int a[105];
	for (int i = 0; i < n; i++)
	{
		scanf ("%d", &a[i]);
	}
	
	int cnt = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] != a[i + 1])
		{
			cnt++;
		}
	}
	
	printf ("%d", cnt);									
}
