#include <stdio.h>

int main() {
    int n, i, factorial;
    factorial = 1;
    i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (i <= n) {
        factorial *= i;
        i++;
    }

    printf("The factorial of %d is %d.\n", n, factorial);
}
