// Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main(){
    int n, product = 1;
    scanf("%d", &n);
    for(int i = 2; i <= n; i += 2){
        product *= i;
    }
    printf("%d (", product);
    for(int i = 2; i <= n; i += 2){
        if(i != 2) printf(" * ");
        printf("%d", i);
    }
    printf(")\n");
    return 0;
}
