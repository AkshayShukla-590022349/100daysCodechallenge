// Write a program to find the roots of a quadratic equation and categorize them
#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, discriminant, root1, root2, realPart, imagPart;
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different: ");
        printf("%.2f, ", root1);
        printf("%.2f\n", root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2*a);
        printf("Roots are real and the same: ");
        printf("%.2f\n", root1);
    }
    else {
        printf("Roots are complex.\n");
    }
    return 0;
}
