#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;

        a = b;

        b = temp;
    }
    return a;
}

int main() {
    int A, B;

    if (scanf("%d %d", &A, &B) != 2) {
        fprintf(stderr, "Error reading input.\n");
        return 1;
    }

    int result_gcd = gcd(A, B);

    printf("%d\n", result_gcd);

    return 0;
}
