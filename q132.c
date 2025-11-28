//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>
typedef enum {
    RED,
    YELLOW,
    GREEN
} TrafficLight;
void printTrafficLightAction(TrafficLight light) {
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light\n");
            break;
    }
}
int main() {
    char input[10];
    scanf("%s", input);
    TrafficLight light;
    if (strcmp(input, "RED") == 0) {
        light = RED;
    } else if (strcmp(input, "YELLOW") == 0) {
        light = YELLOW;
    } else if (strcmp(input, "GREEN") == 0) {
        light = GREEN;
    } else {
        printf("Invalid input\n");
        return 1;
    }
    printTrafficLightAction(light);
    return 0;
}
