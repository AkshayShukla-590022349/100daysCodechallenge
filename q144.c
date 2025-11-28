//Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}
int main() {
    struct Student student1;
    printf("Enter name, roll number and marks: ");
    scanf("%s %d %d", student1.name, &student1.roll, &student1.marks);
    printStudent(student1);
    return 0;
}
