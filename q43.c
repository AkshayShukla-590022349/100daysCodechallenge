// Write a program to check if a number is a strong number.
#include <stdio.h>
int main(){
    int num, originalNum, remainder, result = 0, factorial;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        factorial = 1;
        for (int i = 1; i <= remainder; i++) {
            factorial *= i;
        }
        result += factorial;
        originalNum /= 10;
    }
    if (result == num)
        printf("Strong number\n");
    else
        printf("Not strong number\n");
    return 0;
}
