#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isSquare(int x) {
    int r = sqrt(x);
    return r * r == x;
}

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    char s[12];
    scanf("%s", s);

    int len = strlen(s);
    int list[10]; 
    int count = 0;

    for (int i = len - 1; i >= 0; i--) {
        char sub[12];
        int k = 0;
        for (int j = i; j < len; j++) {
            sub[k++] = s[j];
        }
        sub[k] = '\0';

        int num = atoi(sub);
        int ok = 0;
        for (int t = 0; t < count; t++) {
            if (list[t] == num) {
                ok = 1;
                break;
            }
        }
        if (!ok && isSquare(num)) {
            list[count++] = num;
        }
    }

    if (count == 0) {
        printf("NO\n");
    } else {
        qsort(list, count, sizeof(int), cmp);
        for (int i = 0; i < count; i++) {
            printf("%d\n", list[i]);
        }
    }

    return 0;
}

