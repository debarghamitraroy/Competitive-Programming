#include <iostream>
#include <map>
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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &it : arr) {
            cin >> it;
        }
        if (n <= 2)
            cout << "Yes\n";
        else {
            map<int, int> mpp;
            for (auto it : arr) {
                mpp[it]++;
            }
            if (mpp.size() >= 3)
                cout << "No\n";
            else {
                if (abs(mpp.begin()->second - mpp.rbegin()->second) <= 1)
                    cout << "Yes\n";
                else
                    cout << "No\n";
            }
        }
    }
}
