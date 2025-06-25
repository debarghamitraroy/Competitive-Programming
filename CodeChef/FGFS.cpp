#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

static bool comp(pair<ll, ll> a, pair<ll, ll> b) {
    return a.second < b.second;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        unordered_map<ll, vector<pair<ll, ll>>> mpp;
        for (ll i = 0; i < n; i++) {
            ll arrivalTime, deptTime, comp;
            cin >> arrivalTime >> deptTime >> comp;
            mpp[comp].push_back({arrivalTime, deptTime});
        }
        ll count = 0;
        for (auto it : mpp) {
            sort(it.second.begin(), it.second.end(), comp);
            ll lastDeptTime = 0;
            for (ll j = 0; j < it.second.size(); j++) {
                if (it.second[j].first >= lastDeptTime) {
                    count++;
                    lastDeptTime = it.second[j].second;
                }
            }
        }
        cout << count << '\n';
    }
}