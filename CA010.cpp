#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int prime_check (int n)
{
	if (n == 2 || n == 3)
	{
		return 1;
	}
	
	if (n < 2 || n % 2 == 0 || n % 3 == 0)
	{
		return 0;
	}
	
	for (int i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

int main ()
{
	int t;
	scanf ("%d", &t);
	
	while (t--)
	{
		char s[505];
		scanf ("%s", s);
		int len = strlen(s);
		int nto = 0;
		int konto = 0;
		
		for (int i = 0; i < len; i++)
		{
			int digit = s[i] - '0';
			if (prime_check(digit))
			{
				nto++;
			}
			else
			{
				konto++;
			}
		}
		
		if (prime_check(len) && nto > konto)
		{
			printf("YES\n");
		}
		else
		{
			printf ("NO\n");
		}
	}
	
	return 0;
}
