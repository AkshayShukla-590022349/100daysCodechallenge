// Write a program to calculate a library fine based on late days.
#include <stdio.h>
int main() {
    int lateDays;
    printf("Enter number of late days: ");
    scanf("%d", &lateDays);

    if (lateDays <= 5) {
        printf("Fine ₹%d\n", lateDays * 2);
    } else if (lateDays <= 10) {
        printf("Fine ₹%d\n", lateDays * 4);
    } else if (lateDays <= 30) {
        printf("Fine ₹%d\n", lateDays * 6);
    } else {
        printf("Membership Cancelled\n");
    }
    return 0;
}
