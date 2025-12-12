#include <stdio.h>

int main() {
    int N;
    if (scanf("%d", &N) != 1) {
        return 1;
    }
    int even_count = 0;
    int odd_count = 0;
    int positive_count = 0;
    int negative_count = 0;
    for (int i = 0; i < N; i++) {
        int X;

        if (scanf("%d", &X) != 1) {
         
            return 1; 
        }

        if (X % 2 == 0) {
            even_count++;
        } else {
      
            odd_count++;
        }

        if (X > 0) {
            positive_count++;
        }
        
   
        else if (X < 0) {
            negative_count++;
        }
        

    }


    printf("Even: %d\n", even_count);
    printf("Odd: %d\n", odd_count);
    printf("Positive: %d\n", positive_count);
    printf("Negative: %d\n", negative_count);

    return 0;
}
