#include <stdio.h>

int main() {
    float a, b, c, disc;

    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    disc = b*b - 4*a*c;
    printf("Discriminant = %.2f", disc);

    return 0;
}
