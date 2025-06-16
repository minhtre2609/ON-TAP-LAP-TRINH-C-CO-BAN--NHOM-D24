#include <stdio.h>

int main() {
    int n, a[1000];
    int count[1000] = {0};

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        count[a[i]]++;
    }

    int maxCount = 0;
    for (int i = 0; i < 1000; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
        }
    }

    printf("%d\n", maxCount);
    for (int i = 0; i < 1000; i++) {
        if (count[i] == maxCount) {
            printf("%d ", i);
        }
    }

    return 0;
}

