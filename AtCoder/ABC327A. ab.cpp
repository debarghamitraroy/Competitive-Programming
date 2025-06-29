#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n - 1; i++) {
        if ((str[i] == 'a' && str[i + 1] == 'b') || (str[i] == 'b' && str[i + 1] == 'a')) {
            cout << "Yes";
            return;
        }
    }
    cout << "No";
}
