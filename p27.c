#include <stdio.h>

int main() {
    int h, m, s;
    printf("Enter hours minutes seconds: ");
    scanf("%d %d %d", &h, &m, &s);

    int total = h * 3600 + m * 60 + s;

    printf("Total seconds = %d", total);
    return 0;
}
