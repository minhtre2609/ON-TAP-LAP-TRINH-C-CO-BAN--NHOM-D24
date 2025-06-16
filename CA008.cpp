#include <stdio.h>
#include <string.h>

int main() 
{
    char n[20];
    int count = 0;
    scanf("%s", n);
    for (int i = 0; n[i]; i++) 
	{
        if (n[i] == '4' || n[i] == '7') 
		{
            count++;
        }
    }
    
	if (count == 4 || count == 7) 
	{
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

