#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    vector<string> ans;
    do {
        ans.push_back(str);
    } while (next_permutation(str.begin(), str.end()));
    cout << ans.size() << '\n';
    for (auto it : ans) {
        cout << it << '\n';
    }
}