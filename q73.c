// Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main(){
    int n, m;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    int rowSums[n];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        rowSums[i] = 0; 
        for(int j = 0; j < m; j++){
            rowSums[i] += matrix[i][j];
        }
    }
    printf("Sum of each row:\n");
    for(int i = 0; i < n; i++){
        printf("Row %d sum: %d\n", i + 1, rowSums[i]);
    }
    return 0;
}
