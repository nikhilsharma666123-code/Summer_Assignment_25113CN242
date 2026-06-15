#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int A[10][10];

    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Calculate diagonal sum
    for(int i = 0; i < n; i++) {
        sum += A[i][i];   
    }

    printf("Sum of main diagonal = %d\n", sum);

    return 0;
}