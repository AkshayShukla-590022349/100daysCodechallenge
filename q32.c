// Write a program to check if a number is a palindrome.
#include <stdio.h>
int main(){
    int n, rev=0, temp;
    scanf("%d", &n);
    temp = n;
    while(n != 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if(temp == rev)
        printf("Palindrome");
    else
        printf("Not a Palindrome");
    return 0;
}
