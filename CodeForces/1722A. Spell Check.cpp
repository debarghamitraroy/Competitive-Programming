#include <iostream>
#include <algorithm>
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
        sort(str.begin(), str.end());
        string name = "Timur";
        sort(name.begin(), name.end());
        str == name ? cout << "YES\n" : cout << "NO\n";
    }
}