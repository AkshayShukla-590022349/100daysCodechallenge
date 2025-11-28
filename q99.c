/*
Change the date format from dd/04/yyyy to dd-Apr-yyyy.
*/
#include <stdio.h>
#include <string.h>
int main() {
    char date[11];
    printf("Enter the date in dd/04/yyyy format: ");
    scanf("%s", date);

    if (strlen(date) != 10 || date[2] != '/' || date[5] != '/') {
        printf("Invalid date format. Please use dd/04/yyyy format.\n");
        return 1;
    }
    if (date[3] == '0' && date[4] == '4') {
        date[3] = 'A';
        date[4] = 'p';
        for (int i = 9; i >= 5; i--) {
            date[i + 1] = date[i];
        }
        date[5] = '-';
        date[6] = 'r';
        date[7] = '-';
    } else {
        printf("The month is not April (04). Please enter a valid date.\n");
        return 1;
    }

    printf("Formatted date: %s\n", date);
    return 0;
}
