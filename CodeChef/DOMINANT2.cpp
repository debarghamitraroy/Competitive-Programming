#include <iostream>
#include <unordered_map>
using namespace std;

void solve();

const int N = 1e3 + 5;

int t, n, arr[N];

unordered_map<int, int> freq;

int main() {
    solve();
    return 0;
}

void solve() {
    cin >> t;
    while (t--) {
        freq.clear();
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        int max_freq = 0, max_freq_count = 0;
        for (auto& it : freq) {
            if (it.second > max_freq) {
                max_freq = it.second;
                max_freq_count = 1;
            } else if (it.second == max_freq)
                max_freq_count++;
        }
        max_freq_count == 1 ? cout << "YES\n" : cout << "NO\n";
    }
}