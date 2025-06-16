#include <stdio.h>
#include <string.h>

int check(char s[]) 
{
    int len = strlen(s), i = 0;
    if (len < 3) return 0;
    while (i + 1 < len && s[i] < s[i + 1]) i++;
    if (i == 0 || i == len - 1) return 0;
    while (i + 1 < len && s[i] > s[i + 1]) i++;
    return i == len - 1;
}

int main() 
{
    int t;
    scanf("%d", &t);
    while (t--) 
	{
        char s[20];
        scanf("%s", s);
        printf("%s\n", check(s) ? "YES" : "NO");
    }
    return 0;
}

