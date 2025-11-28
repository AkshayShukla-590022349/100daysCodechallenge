//Write a program to calculate an electricity bill based on units consumed.
#include <stdio.h>
int main() {
    int units;
    float bill;
    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 2.5;
    } else if (units <= 200) {
        bill = (100 * 2.5) + ((units - 100) * 4.75);
    } else {
        bill = (100 * 2.5) + (100 * 4.75) + ((units - 200) * 6);
    }

    printf("Bill: ₹%.2f\n", bill);
    return 0;
}
