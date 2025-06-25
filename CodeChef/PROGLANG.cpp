#include <iostream>
#include <vector>
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
        vector<pair<int, int>> lang(3);
        for (int i = 0; i < 3; i++) {
            cin >> lang[i].first >> lang[i].second;
        }
        int ans = 0;
        for (int i = 1; i < 3; i++) {
            if ((lang[0].first == lang[i].first || lang[0].first == lang[i].second) && (lang[0].second == lang[i].first || lang[0].second == lang[i].second))
                ans = i;
        }
        cout << ans << '\n';
    }
}