#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {
    int population;
    int threshold;
    double percentage;
    int years = 0;

    printf("Enter the population: \n");
    scanf("%d", &population);

    printf("Enter the percentage: \n");
    scanf("%lf", &percentage);

    printf("Enter the threshold : \n");
    scanf("%d",&threshold);

    while (population <= threshold) {
        population = population + round((population*percentage)/100);
        years++;
        printf("Population after %d year: %d \n",years,population);
    }
    printf("Total years to surpass the threshold value: %d",years);

    return 0;
}