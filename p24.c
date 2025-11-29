#include <stdio.h>

int main() {
    int s1, s2, s3, s4, s5, total;
    float avg;

    printf("Enter 5 subject marks: ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    total = s1 + s2 + s3 + s4 + s5;
    avg = total / 5.0;

    printf("Total = %d\nAverage = %.2f", total, avg);
    return 0;
}
