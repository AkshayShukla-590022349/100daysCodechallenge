//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>
int main(){
    FILE *file;
    char input[256];

    file = fopen("data.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("Enter text to append: ");
    fgets(input, sizeof(input), stdin);


    fputs(input, file);
    fclose(file);
    printf("File updated successfully with appended text.\n");
    return 0;
}
