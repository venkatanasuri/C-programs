#include <stdio.h>

int main() {
    int row, col, num = 1;
    for (row = 1; row <= 3; row++) {
        for (col = 1; col <= 4; col++) {
            printf("%d ", num);
            num += 2;
        }
        num -= 6; // reset num to the starting value of the row
        printf("\n");
    }
}
