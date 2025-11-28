#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("input.txt", "r");  
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    int vowels = 0, consonants = 0;
    int ch;
    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) { 
            ch = toupper(ch);
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    fclose(file);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}
