#include <stdio.h>

int main() {
    int age;
    printf("Enter age in years: ");
    scanf("%d", &age);

    printf("Age in months = %d", age * 12);
    return 0;
}
