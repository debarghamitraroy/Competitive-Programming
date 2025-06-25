#include <iostream>
#include <vector>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    vector<int> v(3);
    for (int i = 0; i < 3; i++) {
        cin >> v[i];
    }
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < 3; i++) {
        if (v[i] == n)
            count++;
    }
    count > 0 ? cout << "YES" : cout << "NO";
}