//Find and print the student with the highest marks.

#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 100
struct Student {
    char name[MAX_NAME_LENGTH];
    int id;
    int marks;
};
void findTopper(struct Student students[], int n) {
    struct Student *topper = &students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].marks > topper->marks) {
            topper = &students[i];
        }
    }
    printf("Topper: %s (Marks: %d)\n", topper->name, topper->marks);
}
int main() {
    struct Student students[MAX_STUDENTS];
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter name, id and marks of student %d: ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].id, &students[i].marks);
    }
    findTopper(students, n);
    return 0;
}
