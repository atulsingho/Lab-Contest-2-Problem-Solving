#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0; 

    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);

        if (a % b == 0) {
            printf("0\n");
        } else {
            int moves = b - (a % b);
            printf("%d\n", moves);
        }
    }

    return 0;
}
