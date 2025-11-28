#include <stdio.h>

int main() {
    long long int n, num, digit, ones_complement = 0, place_value = 1;

    scanf("%lld", &n);

    if (n == 0) {
        printf("1\n");
        return 0;
    }

    num = n;

    while (num > 0) {
        digit = num % 10;
        if (digit == 0) {
            ones_complement += place_value;
        }
        place_value *= 10;
        num /= 10;
    }

    printf("%lld\n", ones_complement);

    return 0;
}
