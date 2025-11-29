#include <stdio.h>

int main() {
    float num = 15.58971;
    int integral = (int)num;
    float fractional = num - integral;

    printf("Integral part = %d\n", integral);
    printf("Fractional part = %.5f", fractional);
    return 0;
}
