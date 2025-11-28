// Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=31; i>=0; i--){
        int k = n >> i;
        if(k & 1)
            printf("1");
        else
            printf("0");
    }
    return 0;
}
