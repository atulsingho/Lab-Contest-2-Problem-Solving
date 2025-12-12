#include <stdio.h>

int main() {
    int X, Y;

   
    if (scanf("%d %d", &X, &Y) != 2) {
        return 1;
    }

   
    if (X == 0 && Y == 0) {
        printf("Origem\n");
    } 
 
    else if (X == 0) {
      
        printf("Eixo Y\n");
    } 
    else if (Y == 0) {
       
        printf("Eixo X\n");
    } 
  
    else if (X > 0 && Y > 0) {
       
        printf("Q1\n");
    } 
    else if (X < 0 && Y > 0) {
        
        printf("Q2\n");
    } 
    else if (X < 0 && Y < 0) {
        
        printf("Q3\n");
    } 
    else { 
        printf("Q4\n");
    }

    return 0;
}
