#include <iostream>
#include <vector>
#include <set>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n = 4;
    set<int> st;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        st.emplace(v[i]);
    }
    int ans = 4 - st.size();
    cout << ans;
}