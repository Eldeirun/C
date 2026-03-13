#include <stdio.h>


int sumOfDigits(int n);
int main(void) {
    int n;
    int sum;
    printf("Enter an integer: ");
    scanf("%d",&n);
    sum = sumOfDigits(n);

    printf("Sum of the digits: %d\n",sum);

    if (n % 9 == 0) {
        printf("Divisable by 9: Yes");
    }
    else {
        printf("Divisable by 9: No");
    }



    return 0;
}

int sumOfDigits(int n) {
    int sum = 0;
    int m = 0;

    while (n > 0) {
        m = n %10;
        sum = sum + m;
        n = n / 10;
    }
    return sum;
}