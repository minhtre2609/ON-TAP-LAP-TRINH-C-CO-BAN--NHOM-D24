#include <stdio.h>

int main() {
    int n, A[100], count[1001] = {0};
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        count[A[i]] = 1;
    }

    int printed = 0; 
    for (int i = 1; i <= 1000; i++) {
        if (count[i]) {
            if (printed > 0) printf(" ");
            printf("%d", i);
            printed++;
        }
    }

    return 0;
}

