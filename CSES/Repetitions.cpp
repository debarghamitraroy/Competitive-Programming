#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    string str;
    cin >> str;
    int n = str.size(), count = 1, ans = 0;
    for (int i = 0; i < n - 1; i++) {
        if (str[i] == str[i + 1])
            count++;
        else {
            ans = max(ans, count);
            count = 1;
        }
    }
    ans = max(ans, count);
    cout << ans;
}