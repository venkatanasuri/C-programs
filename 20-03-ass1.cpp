#include <stdio.h>

int biggestOfThree(int num1, int num2, int num3);

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int biggest = biggestOfThree(num1, num2, num3);
    printf("The biggest of the three numbers is %d\n", biggest);
    return 0;
}

int biggestOfThree(int num1, int num2, int num3) {
    int biggest = num1;
    if (num2 > biggest) {
        biggest = num2;
    }
    if (num3 > biggest) {
        biggest = num3;
    }
    return biggest;
}
