#include <stdio.h>

int main() {
    int T;
    if (scanf("%d", &T) != 1) return 0;

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        int numerator = 10 * (Y - X);
        int denominator = 100 - Y;

        int hours_needed = (numerator + denominator - 1) / denominator;

        printf("%d\n", hours_needed);
    }

    return 0;
}
