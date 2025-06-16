#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int digit[10] = {0};
        for (int i = 0; i < n; i++) {
            char s[25];
            scanf("%s", s);
            for (int j = 0; s[j]; j++) {
                digit[s[j] - '0'] = 1;
            }
        }
        for (int i = 0; i < 10; i++) {
            if (digit[i]) printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}

