// Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main() {
    int num1, num2, hcf;
    scanf("%d %d", &num1, &num2);
    if(num2 > num1) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    while(num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    hcf = num1;
    printf("%d\n",hcf);
    return 0;
}
