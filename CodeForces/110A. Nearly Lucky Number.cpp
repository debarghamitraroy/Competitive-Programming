#include <iostream>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    string str;
    cin >> str;
    ll count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '4' || str[i] == '7')
            count++;
    }
    (count == 4 || count == 7) ? cout << "YES" : cout << "NO";
}