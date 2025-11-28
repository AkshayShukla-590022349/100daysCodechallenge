//Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char name[50];
    int roll;
    int marks;
} Student;

int main() {
    Student *student = (Student *)malloc(sizeof(Student));
    if (student == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
