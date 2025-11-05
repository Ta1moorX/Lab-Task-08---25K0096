#include <stdio.h>
int main() {
    int matri2[3][3] = {
        {10, 11, 12},
        {13, 14, 15},
        {16, 17, 18}
    };

    int i, j, max = matri2[0][0];

    printf("Matrix elements:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matri2[i][j]);
            if (matri2[i][j] > max)
                max = matri2[i][j];
        }
        printf("\n");
    }

    printf("Maximum value in the matrix = %d\n", max);
    return 0;
}
