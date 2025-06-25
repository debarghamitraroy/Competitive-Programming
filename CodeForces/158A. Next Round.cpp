#include <iostream>
#include <vector>
using namespace std;


void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int maxx = v[k - 1];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > 0 && v[i] >= maxx)
            count++;
    }
    cout << count;
}