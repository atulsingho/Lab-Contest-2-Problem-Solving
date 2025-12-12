#include <stdio.h>
#include <stdbool.h>
long long find_initial_value(int steps_remaining, long long current_x, bool *found_solution) {

    if (steps_remaining == 0) {
        *found_solution = true;
        return current_x;
    }

    if (*found_solution) {
        return 0;
    }

    long long x_prev_double = current_x * 2;
    
    long long result = find_initial_value(steps_remaining - 1, x_prev_double, found_solution);
    if (*found_solution) {
        return result;
    }

    if ((current_x - 1) % 3 == 0) {
        long long x_prev_third = (current_x - 1) / 3;
        
        if (x_prev_third > 0 && x_prev_third % 2 != 0) {
            result = find_initial_value(steps_remaining - 1, x_prev_third, found_solution);
            if (*found_solution) {
                return result;
            }
        }
    }

    return 0;
}

void solve() {
    int k;
    long long x_final;
    if (scanf("%d %lld", &k, &x_final) != 2) {
        return;
    }

    bool found_solution = false;
    long long initial_value = find_initial_value(k, x_final, &found_solution);

    printf("%lld\n", initial_value);
}

int main() {

    int t;
    if (scanf("%d", &t) != 1) {
        return 1;
    }

    while (t--) {
        solve();
    }

    return 0;
}
