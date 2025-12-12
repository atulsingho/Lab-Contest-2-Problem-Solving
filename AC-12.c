#include <stdio.h>

int main() {
    int X, Y;
    
    if (scanf("%d %d", &X, &Y) != 2) {
        return 1;
    }

    int result = (X + Y) % 12;

    if (result == 0) {
        result = 12;
    }

    printf("%d\n", result);

    return 0;
}
