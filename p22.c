#include <stdio.h>

int main() {
    char name[30], gender;
    int age;
    float height;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter height: ");
    scanf("%f", &height);

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    printf("\nName: %s\nAge: %d\nHeight: %.2f\nGender: %c", 
            name, age, height, gender);

    return 0;
}
