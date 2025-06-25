#include <iostream>
#include <set>
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
        int n, x;
        cin >> n;
        set<int> st;
        for (int i = 0; i < n; i++) {
            cin >> x;
            st.insert(x);
        }
        int ans = 0;
        (n - st.size()) % 2 == 0 ? ans = st.size() : ans = st.size() - 1;
        cout << ans << '\n';
    }
}