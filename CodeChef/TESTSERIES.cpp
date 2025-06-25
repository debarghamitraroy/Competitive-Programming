#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void test_match_series(int arr[], int n) {
    int draw = 0;
    int win = 0;
    int lose = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            draw++;
        if (arr[i] == 1)
            win++;
        if (arr[i] == 2)
            lose++;
    }
    if (win > lose)
        cout << "INDIA\n";
    if (lose > win)
        cout << "ENGLAND\n";
    if (win == lose)
        cout << "DRAW\n";
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n = 5;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        test_match_series(arr, n);
    }
}