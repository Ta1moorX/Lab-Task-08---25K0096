#include <stdio.h>

int main() {
    int row, col;

    printf("Multiplication Table (1-5):\n");

    for (row = 1; row <= 5; row++) {
        printf("%d:\t", row); 
        for (col = 1; col <= 5; col++) {
            printf("%-4d", row * col);  
        }
        printf("\n");  
    }

    return 0;
}

