#include <stdio.h>

double celcius_at_depth (double depth);
double fahrenheit (double celcius);


int main(void) {
    double depth, celc, fahr;
    printf("Enter the depth: \n");
    scanf("%lf",&depth);
    celc = celcius_at_depth(depth);
    fahr = fahrenheit(celc);
    printf("Celcius degree: %.2f \n", celc);
    printf("Fahrenheit degree: %.2f \n", fahr);

    return 0;
}

double celcius_at_depth (double depth) {
    return ((10*depth)+20);
}

double fahrenheit(double celcius) {
    return (celcius*1.8) + 32;
}

