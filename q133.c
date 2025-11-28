//Create an enum for months and print how many days each month has.#include <stdio.h>
enum months {
    JANUARY = 1, FEBRUARY, MARCH, APRIL,
    MAY, JUNE, JULY, AUGUST,
    SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main() {
    const char *monthNames[] = {
        "INVALID", "JANUARY", "FEBRUARY", "MARCH", "APRIL",
        "MAY", "JUNE", "JULY", "AUGUST",
        "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"
    };
    
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    printf("Month\t\tDays\n");
    printf("-----\t\t----\n");
    for (enum months m = JANUARY; m <= DECEMBER; m++) {
        printf("%s\t\t%d\n", monthNames[m], days[m]);
    }
    return 0;
}
