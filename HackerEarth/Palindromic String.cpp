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
    int left = 0, right = str.size() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            cout << "NO";
            return;
        }
        left++;
        right--;
    }
    cout << "YES";
}