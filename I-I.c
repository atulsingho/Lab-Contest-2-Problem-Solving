#include <stdio.h>

int main() {
    int password;
    const int CORRECT_PASSWORD = 1999;

    while (scanf("%d", &password) == 1) {
 
        if (password == CORRECT_PASSWORD) {
            printf("Correct\n");
  
            break;
        } else {
          
            printf("Wrong\n");
        }
    }

    return 0;
}
