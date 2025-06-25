#include <iostream>
#include <algorithm>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    string strA, strB, strC;
    cin >> strA >> strB >> strC;
    int n = strA.length() + strB.length();
    int m = strC.length();
    string str = strA + strB;
    sort(str.begin(), str.end());
    sort(strC.begin(), strC.end());
    (n == m && str == strC) ? cout << "YES" : cout << "NO";
}