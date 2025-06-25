#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 1 || n == 2 || n == 4)
            cout << "-1\n";
        else {
            if (n % 3 == 0)
                cout << n / 3 << " 0 0\n";
            else if (n % 3 == 1)
                cout << (n - 7) / 3 << " 0 1\n";
            else
                cout << (n - 5) / 3 << " 1 0\n";
        }
    }
}

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        ll diff = arr[n - 1], idx = 2;
        while (k--) {
            diff = diff + arr[n - idx];
            idx++;
        }
        cout << diff << '\n';
    }
}