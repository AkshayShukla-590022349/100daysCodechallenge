//Store details of 5 students in an array of structures and print all.
#include <stdio.h>
#define MAX_STUDENTS 5
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student students[MAX_STUDENTS];
    
    for(int i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    printf("\n%-20s %-10s %-10s\n", "Name", "Roll", "Marks");
    printf("-------------------------------------------\n");
    for(int i = 0; i < MAX_STUDENTS; i++) {
        printf("%-20s %-10d %-10.2f\n", students[i].name, students[i].roll, students[i].marks);
    }
    
    return 0;
}
