#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    printf("Multiplication table of %d:\n", n);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }

}
