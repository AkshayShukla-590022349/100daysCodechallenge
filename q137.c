//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>
typedef enum {
    ADMIN,
    USER,
    GUEST
} UserRole;
void displayMessage(UserRole role) {
    switch(role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Unknown Role!\n");
    }
}
int main() {
    UserRole role = GUEST; 
    displayMessage(role);
    return 0;
}
