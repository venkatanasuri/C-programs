#include <stdio.h>

int sumOfNEvens(int n);

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int sum = sumOfNEvens(n);
    printf("The sum of the first %d even numbers is %d\n", n, sum);
    return 0;
}

int sumOfNEvens(int n) {
    if (n == 1) {
        return 2;
    } else {
        return 2 * n + sumOfNEvens(n - 1);
    }
}
