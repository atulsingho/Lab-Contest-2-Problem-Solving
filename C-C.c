#include <stdio.h>

int main() {
    int X;
    int first_digit;
    if (scanf("%d", &X) != 1) {
        return 1; 
    }
    first_digit = X / 1000;
    if (first_digit % 2 == 0) {
        printf("EVEN\n");
    } else {
        printf("ODD\n");
    }

    return 0;
}
