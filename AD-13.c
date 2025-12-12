#include <stdio.h>

int main() {
    int N, M;

    if (scanf("%d %d", &N, &M) != 2) {
        return 0;
    }

    char S[100][101]; 
    
    for (int i = 0; i < N; i++) {
        scanf("%s", S[i]);
    }

    int scores[100] = {0};

    for (int j = 0; j < M; j++) {
        int count0 = 0;
        int count1 = 0;

        for (int i = 0; i < N; i++) {
            if (S[i][j] == '0') {
                count0++;
            } else {
                count1++;
            }
        }

        if (count0 == 0 || count1 == 0) {
            for (int i = 0; i < N; i++) {
                scores[i]++;
            }
        } else if (count0 < count1) {
            for (int i = 0; i < N; i++) {
                if (S[i][j] == '0') {
                    scores[i]++;
                }
            }
        } else {
            for (int i = 0; i < N; i++) {
                if (S[i][j] == '1') {
                    scores[i]++;
                }
            }
        }
    }

    int max_score = -1;
    for (int i = 0; i < N; i++) {
        if (scores[i] > max_score) {
            max_score = scores[i];
        }
    }

    int first = 1;
    for (int i = 0; i < N; i++) {
        if (scores[i] == max_score) {
            if (!first) {
                printf(" ");
            }
            printf("%d", i + 1); 
            first = 0;
        }
    }
    printf("\n");

    return 0;
}
