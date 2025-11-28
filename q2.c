// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("sum = %d\n", a + b);
    printf("difference = %d\n", a - b);
    printf("product = %d\n", a*b);
  
   if(b==0){
    printf("Not Defined.\n");
   }else{
        printf("quotient = %d\n",a/b);
   }
    return 0;
}
