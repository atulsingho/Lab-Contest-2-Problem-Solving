#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    if (scanf("%d", &N) != 1) {
      
        return 1; 
    }
    bool found_even = false;
    for (int i = 2; i <= N; i = i + 2) {
     
        printf("%d\n", i);
  
        found_even = true;
    }

    if (!found_even) {
        printf("-1\n");
    }

    return 0;
}
