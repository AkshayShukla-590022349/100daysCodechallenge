// Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main(){
    int r;
    const float pi = 3.14;
    scanf("%d", &r);
    printf("Area=%f, Circumference=%f\n", pi*r*r, 2*pi*r);   
    return 0;
}
