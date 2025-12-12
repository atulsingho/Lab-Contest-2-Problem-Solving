#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    if (scanf("%d", &N) != 1 || N < 1 || N > 1000) {
    
        return 1;
    }

 
    long long current_number;

    long long max_number = LLONG_MIN;

  
    for (int i = 0; i < N; i++) {
     
        if (scanf("%lld", &current_number) != 1) {
          
            return 1;
        }

   
        if (current_number > max_number) {
           
            max_number = current_number;
        }
    }

   
    printf("%lld\n", max_number);

    return 0;
}
