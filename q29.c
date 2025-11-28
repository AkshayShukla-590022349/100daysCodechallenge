// Write a program to calculate the factorial of a number.

#include <stdio.h>
int main(){
    int n;
    unsigned long long factorial = 1;
    scanf("%d", &n);
    if(n < 0)
        printf("Error: Factorial of a negative number doesn't exist.\n");
    else{
        for(int i = 1; i <= n; i++){
            factorial *= i;
        }
        printf("%llu\n", factorial);
    }
    return 0;
}
