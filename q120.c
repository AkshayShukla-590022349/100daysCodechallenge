/*
Write a program to take a string input. Change it to sentence case.
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int capitalizeNext = 1;

    for(int i = 0; str[i] != '\0'; i++) {
        if(isspace(str[i])) {
            capitalizeNext = 1; 
        } else if(capitalizeNext && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalizeNext = 0; 
        } else {
            str[i] = tolower(str[i]); // Convert to lowercase
        }
    }

    printf("Converted string: %s", str);
    return 0;
}
}
