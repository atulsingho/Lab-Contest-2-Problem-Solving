#include <stdio.h>

int main() {
    int N;
  
    if (scanf("%d", &N) != 1) {
     
        return 1;
    }


    for (int i = 1; i <= 12; i++) {
      
        int result = N * i;

        printf("%d * %d = %d\n", N, i, result);
    }

    return 0;
}
