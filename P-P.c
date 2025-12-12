#include <stdio.h>
#include <math.h>
#include <stdlib.h> 

void findDivisors(int N) {
    if (N < 1 || N > 10000) {
        fprintf(stderr, "Error: N is out of the valid range (1 <= N <= 10000).\n");
        return;
    }

    int second_half[101];
    int count = 0; 

    int limit = (int)sqrt(N);
    for (int i = 1; i <= limit; i++) {
        if (N % i == 0) {
            printf("%d\n", i);

            int other_divisor = N / i;
            if (i != other_divisor) {
                second_half[count++] = other_divisor;
            }
        }
    }

    for (int j = count - 1; j >= 0; j--) {
        printf("%d\n", second_half[j]);
    }
}

int main() {
    int N;

    if (scanf("%d", &N) != 1) {
        fprintf(stderr, "Error reading integer input.\n");
        return 1;
    }

    findDivisors(N);

    return 0;
}
