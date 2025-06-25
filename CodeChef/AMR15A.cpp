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
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    pair<int, int> p = {0, 0};
    for (int i = 0; i < n; i++) {
        v[i] % 2 == 0 ? p.first++ : p.second++;
    }
    p.first > p.second ? cout << "READY FOR BATTLE" : cout << "NOT READY";
}