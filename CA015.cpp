#include <stdio.h>
#include <string.h>

int main() {
    char s[1005];
    int appear[100] = {0};

    scanf("%s", s);
    int len = strlen(s);

    for (int i = 0; i + 1 < len; i += 2) {
        int x = (s[i] - '0') * 10 + (s[i+1] - '0');
        appear[x] = 1;
    }

    for (int i = 10; i < 100; i++) {
        if (appear[i]) {
            printf("%d ", i);
        }
    }

    return 0;
}

