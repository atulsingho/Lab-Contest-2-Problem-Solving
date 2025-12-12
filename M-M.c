#include <stdio.h>
#include <math.h>

int is_prime(int N) {
 
    if (N < 2) {
        return 0;
    }

    if (N == 2) {
        return 1;
    }

    if (N % 2 == 0) {
        return 0;
    }
    

    int limit = (int)sqrt(N);

    for (int i = 3; i <= limit; i += 2) {
        if (N % i == 0) {
         
            return 0;
        }
    }
    
 
    return 1;
}

int main() {
 
    int X;

    if (scanf("%d", &X) != 1) {
      
        return 1;
    }
  
    if (is_prime(X)) {
      
        printf("YES\n");
    } else {
       
        printf("NO\n");
    }
    
    return 0;
}
