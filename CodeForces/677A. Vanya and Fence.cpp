#include <iostream>
#include <vector>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n, h;
    cin >> n >> h;
    int count = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        v[i] > h ? count = count + 2 : count++;
    }
    cout << count;
}