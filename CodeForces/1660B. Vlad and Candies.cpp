#include <iostream>
#include <algorithm>
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
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    if (n == 1 && v[0] >= 2)
        cout << "NO";
    else if ((v[n - 1] - v[n - 2]) >= 2)
        cout << "NO";
    else
        cout << "YES";
}