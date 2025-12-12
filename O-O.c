#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void sieveOfEratosthenes(int N) {
    bool* isPrime = (bool*)malloc((N + 1) * sizeof(bool));
    if (isPrime == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return;
    }

    for (int i = 0; i <= N; i++) {
        isPrime[i] = true;
    }

    if (N >= 0) isPrime[0] = false;
    if (N >= 1) isPrime[1] = false;

    for (int p = 2; p * p <= N; p++) {
        if (isPrime[p] == true) {
            for (int i = p * p; i <= N; i += p) {
                isPrime[i] = false;
            }
        }
    }

    for (int p = 2; p <= N; p++) {
        if (isPrime[p]) {
            printf("%d ", p);
        }
    }
    printf("\n"); 

    free(isPrime);
}

int main() {
    int N;

    if (scanf("%d", &N) != 1) {
        return 1;
    }

    if (N < 2 || N > 100000) {
        if (N >= 2) { 
             sieveOfEratosthenes(N);
        }
        return 0; 
    }

    sieveOfEratosthenes(N);

    return 0;
}
