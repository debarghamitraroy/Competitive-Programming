#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    string s, t;
    cin >> s >> t;
    bool flag = true;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            flag = true;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            int idx = t.find(s[i - 1]);
            if (idx != string::npos)
                flag = true;
            else {
                flag = false;
                break;
            }
        }
    }
    if (flag)
        cout << "Yes";
    else
        cout << "No";
}
