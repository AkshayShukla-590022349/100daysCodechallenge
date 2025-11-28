// Write a program to find the LCM of two numbers.
#include <stdio.h>
int main() {
    int num1, num2, lcm;
    scanf("%d %d", &num1, &num2);
    int a = num1, b = num2;
    if(b > a) {
        int temp = a;
        a = b;
        b = temp;
    }
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    lcm = (num1 * num2) / a;
    printf("%d\n", lcm);
    return 0;
}
