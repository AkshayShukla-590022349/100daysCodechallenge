/*
Print all sub-strings of a string.
*/

#include <stdio.h>
#include <string.h>

void printSubStrings(char str[]){
    int n = strlen(str);
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                printf("%c", str[k]);
            }
            printf(",");
        }
    }
}

int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printSubStrings(str);
    return 0;
}
