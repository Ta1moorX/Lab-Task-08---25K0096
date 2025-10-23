#include <stdio.h>
int main() {
    int matri1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matri2[3][3] = {
        {10, 11, 12},
        {13, 14, 15},
        {16, 17, 18}
    };

    int sum[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = matri1[i][j] + matri2[i][j];
        }
    }

    printf("Sum of mat 1 & 2:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
        printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
