#include <stdio.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	
	while (t--)
	{
		int n;
	    scanf ("%d", &n);
	
	    double S = 0.0;
	
	    if (n % 2 == 0)
	    {
	    	for (int i = 2; i <= n; i += 2)
	    	{
	    		S += 1.0 / i;
			}
	    }
	    else
	    {
	    	for (int i = 1; i <= n; i += 2)
	    	{
	    		S += 1.0 / i;
			}
	    }
	
	    printf ("%.6lf\n", S);
	}
	
	return 0;
}
