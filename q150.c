//Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
int main() {
    struct Student *studentPtr;
    studentPtr = (struct Student *)malloc(sizeof(struct Student));

    strcpy(studentPtr->name, "John");
    studentPtr->roll = 106;
    studentPtr->marks = 91;

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", 
           studentPtr->name, studentPtr->roll, studentPtr->marks);
    free(studentPtr);
    return 0;
}
