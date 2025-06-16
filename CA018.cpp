#include <stdio.h>

int gcd(int a, int b) {
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int power10(int x) {
    int res = 1;
    while (x--) res *= 10;
    return res;
}

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int start = power10(K - 1);
    int end = power10(K) - 1;
    int count = 0;

    for (int i = start; i <= end; ++i) {
        if ((i & 1) == 0 && (N & 1) == 0) continue;
        if (gcd(i, N) == 1) {
            printf("%d ", i);
            count++;
            if (count % 10 == 0) printf("\n");
        }
    }

    return 0;
}

