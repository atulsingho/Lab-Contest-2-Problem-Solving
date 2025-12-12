#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        int sum = 0;
        int min_val, max_val;

        if (X < Y) {
            min_val = X;
            max_val = Y;
        } else {
            min_val = Y;
            max_val = X;
        }

        for (int i = min_val + 1; i < max_val; i++) {
     
            if (i % 2 != 0) {
                sum += i;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}
