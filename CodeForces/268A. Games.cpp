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
    vector<int> h(n), a(n);
    for (int j = 0; j < n; j++) {
        cin >> h[j] >> a[j];
    }
    int count = 0;
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            if (h[j] == a[k])
                count++;
        }
    }
    cout << count;
}
