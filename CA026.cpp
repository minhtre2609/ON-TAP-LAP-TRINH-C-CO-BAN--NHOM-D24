#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int gcd(int a, int b) 
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main ()
{
	int n;
	scanf ("%d", &n);
	
	int b = n % 100;
	int a = (n - b) / 100;
	
	int bcnn = (a * b) / gcd(a, b);
	printf ("%d", bcnn);
	
	return 0;
}
