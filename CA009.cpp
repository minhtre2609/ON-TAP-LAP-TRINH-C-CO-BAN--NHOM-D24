#include <stdio.h>
#include <string.h>

int main() {
    int t;
    char s[15];
    scanf("%d", &t);
    while (t--) {
        scanf("%s", s);
        int ok = 1;
        for (int i = 0; s[i]; i++) {
            if (s[i] != '0' && s[i] != '1' && s[i] != '2') {
                ok = 0;
                break;
            }
        }
        if (ok) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

