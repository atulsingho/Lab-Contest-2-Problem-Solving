#include <stdio.h>

int main() {
    int n, m;

    while (1) {
        if (scanf("%d %d", &n, &m) != 2) {
            break;
        }

        if (n <= 0 || m <= 0) {
            break;
        }

        int min, max;
        if (n < m) {
            min = n;
            max = m;
        } else {
            min = m;
            max = n;
        }

        int sum = 0;

        for (int i = min; i <= max; i++) {
            printf("%d ", i); 
            sum += i;         
        }

        printf("sum =%d\n", sum);
    }

    return 0;
}
