#include <iostream>
#include <vector>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    vector<vector<int>> arr(5, vector<int>(5));
    int row = 0, col = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }
    cout << abs(row - 2) + abs(col - 2);
}