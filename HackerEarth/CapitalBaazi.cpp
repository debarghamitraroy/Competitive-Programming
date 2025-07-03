#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    while (true) {
        string str;
        cin >> str;
        if (str.size() == 0)
            break;
        for (int i = 0; i < str.size(); i++) {
            str[i] -= 32;
        }
        cout << str << '\n';
    }
}
