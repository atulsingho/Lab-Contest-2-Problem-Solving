#include <stdio.h>

int main() {
    long long A, B, C;
    char S, Q;
    if (scanf("%lld %c %lld %c %lld", &A, &S, &B, &Q, &C) != 5) {
      
        return 1;
    }

    long long R = 0; 
    switch (S) {
        case '+':
            R = A + B;
            break;
        case '-':
            R = A - B;
            break;
        case '*':
            R = A * B;
            break;
    
        default:
           
            return 1; 
    }

  
    if (C == R) {
     
        printf("Yes\n");
    } else {
   
        printf("%lld\n", R);
    }

    return 0;
}
