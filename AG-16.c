#include <stdio.h>

int main() {
    int x;

    if (scanf("%d", &x) != 1) {
        return 1; 
    }

    if (x < 3) {
        printf("GOLD\n");
    } 
    else if (x >= 3 && x < 6) {
        printf("SILVER\n");
    } 
    else {
        printf("BRONZE\n");
    }

    return 0;
}
