//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef enum {
    ADD,
    SUBTRACT,
    MULTIPLY,
    INVALID
} Operation;
Operation getOperation(const char* opStr) {
    if (strcmp(opStr, "ADD") == 0) return ADD;
    if (strcmp(opStr, "SUBTRACT") == 0) return SUBTRACT;
    if (strcmp(opStr, "MULTIPLY") == 0) return MULTIPLY;
    return INVALID;
}
int main() {
    char opStr[10];
    int a, b;
    scanf("%s %d %d", opStr, &a, &b);
    Operation op = getOperation(opStr);
    int result;
    switch (op) {
        case ADD:
            result = a + b;
            break;
        case SUBTRACT:
            result = a - b;
            break;
        case MULTIPLY:
            result = a * b;
            break;
        default:
            printf("Invalid operation\n");
            return 1;
    }
    printf("%d\n", result);
    return 0;
}
