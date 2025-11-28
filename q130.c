//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[MAX_NAME_LENGTH];
    int rollNumber;
    int marks;
};

void writeToFile(FILE *file, struct Student students[], int n)
{
    for (int i = 0; i < n; i++)
    {
        fprintf(file, "%s %d %d\n", students[i].name, students[i].rollNumber, students[i].marks);
    }
}

void readFromFile(FILE *file)
{
    struct Student student;
    while (fscanf(file, "%s %d %d", student.name, &student.rollNumber, &student.marks) != EOF)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n", student.name, student.rollNumber, student.marks);
    }
}

int main()
{
    FILE *file = fopen("students.txt", "w+"); 
    if (file == NULL)
    {
        printf("Could not open file for writing.\n");
        return 1;
    }

    struct Student students[] = {
        {"Asha", 101, 85},
        {"Ravi", 102, 92}};

    int numberOfStudents = sizeof(students) / sizeof(students[0]);

    writeToFile(file, students, numberOfStudents);
    rewind(file);
    printf("Student Records from File:\n");
    readFromFile(file);
}

    // Close the file
    fclose(file);

    return 0;
}
