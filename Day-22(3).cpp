#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Sequence from 1 to %d and %d to 1:\n", n, n);

    // Sequence from 1 to n
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
        // Print the corresponding number from n to 1
        printf("%d\n", n-i+1);
    }
}
