#include <iostream>
#include <vector>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n;
    cin >> n;
    vector<string> str(n);
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    int count = 1;
    for (int i = 0; i < str.size() - 1; i++) {
        if (str[i] != str[i + 1])
            count++;
    }
    cout << count;
}