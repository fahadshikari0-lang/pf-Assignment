#include <stdio.h>

int main() {
    int age;
    printf("Enter your age in years: ");
    scanf("%d", &age);

    printf("Months = %d\n", age * 12);
    printf("Days = %d", age * 365);
    return 0;
}
