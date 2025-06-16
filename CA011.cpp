#include <stdio.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	
	while (t--)
	{
		char n[505];
		scanf ("%s", n);
		
		int sum = 0;
		for (int i = 0; i < strlen (n); i++)
		{
			sum += n[i] + '0';
		}
		
		if (sum % 3 == 0)
		{
			printf ("YES\n");
		}
		else
		{
			printf ("NO\n");
		}
	}
	
	return 0;
}
