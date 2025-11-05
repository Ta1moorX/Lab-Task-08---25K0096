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
    int result[3][3];
    int i, j, k;
    int max = matri2[0][0];

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (matri2[i][j] > max)
                max = matri2[i][j];

    printf("Maximum value in matri2 = %d\n\n", max);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (k = 0; k < 3; k++)
                result[i][j] += matri1[i][k] * matri2[k][j];
        }
    }

    printf("Matrix Multiplication Result:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}
