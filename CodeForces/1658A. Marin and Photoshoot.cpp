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
    int zero = 0, count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (str[i] == '0' && str[i + 1] == '0')
            count = count + 2;
        else if (str[i] == '0' && str[i + 1] == '1' && str[i + 2] == '0')
            count = count + 1;
    }
    cout << count;
}