#include <stdio.h>

int main() {
    int roll, pf, ic, cg, total;
    float average;

    printf("Enter Roll No: ");
    scanf("%d", &roll);

    printf("Enter marks of PF, IC and CG: ");
    scanf("%d %d %d", &pf, &ic, &cg);

    total = pf + ic + cg;
    average = total / 3.0;

    printf("Total = %d\nAverage = %.2f", total, average);
    return 0;
}
