#include <stdio.h>

int main() {
    int a = 3, b = 7, t;

    t = a;
    a = b;
    b = t;

    printf("a = %d, b = %d", a, b);
    return 0;
}
