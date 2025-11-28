// Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int num, digit, product = 1, has_odd = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) { 
            product *= digit;
            has_odd = 1; 
        }
        num /= 10;
    }
    if (has_odd) {
        printf("%d\n", product);
    } else {
        printf("1 (no odd digits, assume 1)\n");
    }
    return 0;
}
