#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        int count = 0;
        for (auto it : str) {
            it == '4' ? count++ : count;
        }
        cout << count << '\n';
    }
}