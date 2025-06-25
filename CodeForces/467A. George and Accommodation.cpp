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
    int count = 0;
    vector<int> p(n), q(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i] >> q[i];
        if (p[i] < q[i] && q[i] - p[i] >= 2)
            count++;
    }
    cout << count;
}