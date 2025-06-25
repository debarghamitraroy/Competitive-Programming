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
    bool flag = false;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9') {
            flag = true;
            break;
        } else
            flag = false;
    }
    flag == true ? cout << "YES" : cout << "NO";
}