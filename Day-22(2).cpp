#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n");
    printf("Count of factors of %d: %d\n", num, count);
}
