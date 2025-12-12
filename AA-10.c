#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);

    for (int a = 2; a * a * a < n; a++) {
        
        if (n % a == 0) {
            int remaining = n / a;
            for (int b = a + 1; b * b < remaining; b++) {
                
                if (remaining % b == 0) {
                    int c = remaining / b;
                    printf("YES\n");
                    printf("%d %d %d\n", a, b, c);
                    return;
                }
            }
        }
    }

    printf("NO\n");
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
