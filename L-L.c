#include <stdio.h>
long long calculate_factorial(int N) {
    if (N < 0) {
        return -1; 
    }
    if (N == 0 || N == 1) {
       
        return 1;
    }
    
   
    long long result = 1;
  
        result = result * i;
    }
    
    return result;
}

int main() {
   
    int T;
    
    
    if (scanf("%d", &T) != 1) {
        return 1; 
    }
    
  
    while (T--) {
       
        int N;
        
       
        if (scanf("%d", &N) != 1) {
            return 1;
        }
        
    
        long long factorial_result = calculate_factorial(N);
        
     
        printf("%lld\n", factorial_result);
    }
    
    return 0;
}
