#include <stdio.h>

int main() {

    int N;
    int i;
    if (scanf("%d", &N) != 1) {
        return 1;
    }
    for (i = 1; i <= N; i++) {
        printf("%d\n", i);
    }
    return 0;
}
