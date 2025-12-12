#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void solve() {
    char N[10];

   
    if (scanf("%9s", N) != 1) {
        return; 
    }

    int len = strlen(N);


    int i, j;
    
    int start_index = -1;
    for (i = len - 1; i >= 0; i--) {
        if (N[i] != '0') {
            start_index = i;
            break;
        }
    }

    for (i = start_index; i >= 0; i--) {
        printf("%c", N[i]);
    }
    printf("\n");


    bool is_pal = true;
    
   
    i = 0;
    j = len - 1;

    while (i < j) {
        if (N[i] != N[j]) {
            is_pal = false; 
            break;
        }
        i++;
        j--;
    }

    if (is_pal) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    solve();
    return 0;
}
