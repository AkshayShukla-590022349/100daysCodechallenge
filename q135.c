//Assign explicit values starting from 10 and print them.

#include <stdio.h>

enum months {
    JANUARY = 10, FEBRUARY, MARCH, APRIL,
    MAY, JUNE, JULY, AUGUST,
    SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main() {
    const char *monthNames[] = {
        /* indices 0-9 unused */ NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
        "JANUARY", "FEBRUARY", "MARCH", "APRIL",
        "MAY", "JUNE", "JULY", "AUGUST",
        "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"
    };
    
    int days[] = {0,0,0,0,0,0,0,0,0,0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    printf("Month\tValue\tDays\n");
    printf("-----\t-----\t----\n");
    for (enum months m = JANUARY; m <= DECEMBER; m++) {
        printf("%s\t%d\t%d\n", monthNames[m], m, days[m]);
    }
    return 0;
}
