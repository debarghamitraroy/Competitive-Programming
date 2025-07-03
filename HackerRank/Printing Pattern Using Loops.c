#include <stdio.h>

#define min(a, b) (a < b ? a : b)

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n;
    scanf("%d", &n);
    int len = 2 * n - 1;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            int min_of_i_j = min(i, j);
            if (min_of_i_j >= len - i)
                min_of_i_j = len - i - 1;
            if (min_of_i_j >= len - j - 1)
                min_of_i_j = len - j - 1;
            printf("%d ", n - min_of_i_j);
        }
        printf('\n');
    }
}
