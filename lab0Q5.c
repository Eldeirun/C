#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibonacci(int n);

int main(void) {
    int n = 0;
    printf("Enter the number: \n");
    scanf("%d", &n);

    int nth = fibonacci(n);
    printf("%d fibonacci number is %d", n, nth);
    return 0;
}

int fibonacci(int n) {
    int prev = 0;
    int current  = 1;
    int next = 0;
    int i = 0;

    if (n==0) {
        return 0;
    }
    if (n==1) {
        return 1;
    }
    for (i = 2; i <= n; i++) {
        next = current + prev;
        prev = current;
        current = next;
    }
}