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
        int n;
        cin >> n;
        string str;
        cin >> str;
        int count = 0;
        for (auto it : str) {
            (it == 'a' || it == 'e' || it == 'i' || it == 'o' || it == 'u') ? count = 0 : count++;
            if (count >= 4)
                break;
        }
        count >= 4 ? cout << "NO\n" : cout << "YES\n";
    }
}