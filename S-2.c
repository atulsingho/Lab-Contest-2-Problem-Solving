#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve() {
    int x;
    scanf("%d", &x);

    int best_y = 1;
    int max_val = -1;

    for (int y = 1; y < x; y++) {
        int current_val = gcd(x, y) + y;
        if (current_val > max_val) {
            max_val = current_val;
            best_y = y;
        }
    }

    printf("%d\n", best_y);
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
