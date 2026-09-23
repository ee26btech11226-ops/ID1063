#include <stdio.h>

void greyscale(int m, int n, int a[m][n], int b[m][n], int threshold) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] >= threshold) {
                b[i][j] = 255;
            } else {
                b[i][j] = 0;
            }
        }
    }
}

int main() {
    int m, n;
    int threshold;

    if (scanf("%d", &m) != 1 || scanf("%d", &n) != 1 || scanf("%d", &threshold) != 1) {
        return 1;
    }

    int a[m][n];
    int b[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    greyscale(m, n, a, b, threshold);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}

