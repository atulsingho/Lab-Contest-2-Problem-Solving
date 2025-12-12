#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int h, m;
        scanf("%d %d", &h, &m);

        int minutes_passed = (h * 60) + m;

        int result = 1440 - minutes_passed;

        printf("%d\n", result);
    }

    return 0;
}
