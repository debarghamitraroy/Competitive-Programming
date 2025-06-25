#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

bool canPalindrome(string s, int n, int k) {
    int left = 0;
    int right = n - 1;
    int count = 0;
    while (left < right) {
        if (s[left] != s[right])
            count++;
        left++;
        right--;
    }
    if (n % 2 == 0) {
        if (count <= k && (k - count) % 2 == 0)
            return true;
        else
            return false;
    } else {
        if (count <= k)
            return true;
        else
            return false;
    }
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int k;
        cin >> k;
        string s;
        cin >> s;
        canPalindrome(s, n, k) ? cout << "YES\n" : cout << "NO\n";
    }
}