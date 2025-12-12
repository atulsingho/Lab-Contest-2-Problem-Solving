#include <stdio.h>

int main() {
    char grid[4][5];

    for (int i = 0; i < 4; i++) {
        scanf("%s", grid[i]);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int blackCount = 0;

            if (grid[i][j] == '#') blackCount++;
            if (grid[i][j+1] == '#') blackCount++;
            if (grid[i+1][j] == '#') blackCount++;
            if (grid[i+1][j+1] == '#') blackCount++;

            if (blackCount != 2) {
                printf("YES\n");
                return 0; 
            }
        }
    }

    printf("NO\n");

    return 0;
}
