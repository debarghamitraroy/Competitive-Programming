#include <iostream>
#include <set>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    string str;
    getline(cin, str);
    int n = str.length();
    set<char> st;
    for (int i = 0; i < n; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            st.insert(str[i]);
    }
    cout << st.size();
}