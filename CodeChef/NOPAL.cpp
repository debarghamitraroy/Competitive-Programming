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
        string str = "";
        char curr = 'a';
        for (int i = 0; i < n; i++) {
            str = str + curr;
            curr++;
            if (curr == 'd')
                curr = 'a';
        }
        cout << str << '\n';
    }
}