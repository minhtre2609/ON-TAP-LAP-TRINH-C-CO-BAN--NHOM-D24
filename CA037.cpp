#include <stdio.h>
#include <stdlib.h>

#define MAX 20

int compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main() {
    int n;
    scanf("%d", &n);

    int input[MAX][MAX];  
    int values[MAX * MAX];  

    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &input[i][j]);
            values[k++] = input[i][j];
        }
    }

    qsort(values, n * n, sizeof(int), compare);

    int result[MAX][MAX];
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    k = 0;

    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; j++)
            result[top][j] = values[k++];
        top++;

        for (int i = top; i <= bottom; i++)
            result[i][right] = values[k++];
        right--;

        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                result[bottom][j] = values[k++];
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                result[i][left] = values[k++];
            left++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

