#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // 3x3 matrix
    
    // iterate over the rows
    for (int i = 0; i < 3; i++) {
        // iterate over the columns
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]); // print each element
        }
        printf("\n"); // print a newline after each row
    }
    
    return 0;
}

