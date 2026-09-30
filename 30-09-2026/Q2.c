#include <stdio.h>

int function(int n, int m, int A[n][m], int i, int j) {
    if (A[i][j] == 1) {
        return -1;
    }

    int count = 0;

    for (int r = i - 1; r <= i + 1; r++) {
        for (int c = j - 1; c <= j + 1; c++) {
            // Skip checking the cell itself
            if (r == i && c == j) {
                continue;
            }
            
            if (r >= 0 && r < n && c >= 0 && c < m) {
                if (A[r][c] == 1) {
                    count++;
                }
            }
        }
    }
    
    return count;
}

int main(void) {
    int n, m;

    if (scanf("%d %d", &n, &m) != 2) return 1;

    int A[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", function(n, m, A, i, j));
        }
        printf("\n");
    }

    return 0;
}

