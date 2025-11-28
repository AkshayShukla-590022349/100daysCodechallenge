//Define a struct with enum Gender and print person's gender.

#include <stdio.h>
typedef enum
{
    MALE,
    FEMALE,
    OTHER
} Gender;
typedef struct
{
    char name[50];
    int age;
    Gender
        gender;
} Person;
void printGender(Gender gender)
{
    switch (gender)
    {
    case MALE:
        printf("Male\n");
        break;
    case FEMALE:
        printf("Female\n");
        break;
    case OTHER:
        printf("Other\n");
        break;
    default:
        printf("Unknown\n");
        break;
    }
}
int main()
{
    Person person1 = { "John Doe", 30, MALE };
    printGender (person1.gender);
    return 0;       
}
