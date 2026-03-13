#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {

    int speed = 0;
    int high_count = 0, medium_count = 0, low_count = 0;
    int car_count = 0;

    printf("Enter the speeds: \n");
    scanf("%d", &speed);

    while (speed != -99) {
        car_count++;

        if (speed >= 90) {
            printf("Vehicle %d have a high speed", car_count);
            high_count++;
        }
        else if (speed > 50 && speed < 90) {
            printf("Vehicle %d have a normal speed", car_count);
            medium_count++;
        }
        else if (speed <= 50) {
            printf("Vehicle %d have a slow speed", car_count);
            low_count++;
        }
        scanf("%d",speed);
    }

    return 0;
}