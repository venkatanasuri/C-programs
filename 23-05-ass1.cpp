#include <stdio.h>

 main() {
    int age;
    int babyCount = 0;
    int schoolCount = 0;
    int adultCount = 0;

    for (int i = 0; i < 20; i++) {
        printf("Enter the age of person %d: ", i + 1);
        scanf("%d", &age);

        if (age >= 0 && age <= 5) {
            babyCount++;
        } else if (age >= 6 && age <= 18) {
            schoolCount++;
        } else if (age >= 19) {
            adultCount++;
        }
    }

    printf("Number of persons in each age group:\n");
    printf("Baby age (0-5): %d\n", babyCount);
    printf("School age (6-18): %d\n", schoolCount);
    printf("Adult age (19 and above): %d\n", adultCount);

    
}
