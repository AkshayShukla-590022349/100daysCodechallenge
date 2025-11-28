/*
Perform diagonal traversal of a matrix.
*/

#include <stdio.h>
int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int d = 0; d < m + n - 1; d++){
        if(d % 2 == 0){
            for(int i = (d < m ? d : m - 1), j = d - i; i >= 0 && j < n; i--, j++){
                printf("%d ", a[i][j]);
            }
        } else {
            for(int j = (d < n ? d : n - 1), i = d - j; j >= 0 && i < m; j--, i++){
                printf("%d ", a[i][j]);
            }
        }
    }
    return 0;
}
