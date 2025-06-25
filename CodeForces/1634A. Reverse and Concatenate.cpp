#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

bool isPalindrome(string& str, int n, int i) {
    if (i >= n / 2)
        return true;
    if (str[i] != str[n - i - 1])
        return false;
    return isPalindrome(str, n, i + 1);
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        (isPalindrome(str, n, 0) || k == 0) ? cout << "1\n" : cout << "2\n";
    }
}