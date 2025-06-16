#include <stdio.h>
#include <stdlib.h>

int s(int n) {
    int t = 0;
    while (n) {
        t += n % 10;
        n /= 10;
    }
    return t;
}

int cmp(const void *a, const void *b) {
    int x = *(int*)a;
    int y = *(int*)b;
    int sx = s(x);
    int sy = s(y);
    if (sx != sy) return sx - sy;
    return x - y;
}

int main() {
    int t, n, a[100];
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        qsort(a, n, sizeof(int), cmp);
        for (int i = 0; i < n; i++) printf("%d ", a[i]);
        printf("\n");
    }
    return 0;
}

