#include <stdio.h>

int main() 
{
    char N[20];
    int K, i;
    long long X = 0;
    scanf("%s %d", N, &K);
    
    for(i = 0; i < K; i++)
    {
    	X = X * 10 + (N[i] - '0');
	}
    
	printf("%lld\n", X / K);
    return 0;
}

