// Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main() {
    int num, first_digit, last_digit, num_digits, swapped_num;
    printf("Enter a number: ");
    scanf("%d", &num);
    last_digit = num % 10;
    num_digits = (int)log10(num); 
    first_digit = (int)(num / pow(10, num_digits));
    swapped_num = last_digit * pow(10, num_digits) + (num % (int)pow(10, num_digits) - last_digit) + first_digit;
    printf("%d\n", swapped_num);
    return 0;
}
