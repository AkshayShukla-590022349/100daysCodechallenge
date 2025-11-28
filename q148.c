//Take two structs as input and check if they are identical.

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};
int main() {
    struct Student student1, student2;
    printf("Enter details for Student 1 (name roll marks): ");
    scanf("%s %d %d", student1.name, &student1.roll, &student1.marks);
    printf("Enter details for Student 2 (name roll marks): ");
    scanf("%s %d %d", student2.name, &student2.roll, &student2.marks);
    if (strcmp(student1.name, student2.name) == 0 && 
        student1.roll == student2.roll && 
        student1.marks == student2.marks) {
        printf("Same\n");
    } else {
        printf("Different\n");
    }

    return 0;
}
