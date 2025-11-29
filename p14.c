#include <stdio.h>

int main() {
    float mm;
    printf("Enter mm: ");
    scanf("%f", &mm);

    printf("Inches = %.3f", mm / 25.4);
    return 0;
}
