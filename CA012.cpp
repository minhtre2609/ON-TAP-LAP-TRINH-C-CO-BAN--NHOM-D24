#include <stdio.h>

int main() {
    int n, m, x;
    int existA[1001] = {0}, existB[1001] = {0};
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        existA[x] = 1;
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        existB[x] = 1;
    }
    for (int i = 0; i <= 1000; i++) {
        if (existA[i] != existB[i]) {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}

