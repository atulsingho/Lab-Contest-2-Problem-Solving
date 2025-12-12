#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        if (n == 0) {
            printf("0");
        } else {
            while (n > 0) {
                printf("%d ", n % 10);
                
                n = n / 10;
            }
        }
        
        printf("\n");
    }

    return 0;
}
