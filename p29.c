#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 100)
        printf("Number is greater than 100");

    return 0;
}
