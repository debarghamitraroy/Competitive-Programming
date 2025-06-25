#include <iostream>
#include <unordered_map>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    string str;
    cin >> str;
    unordered_map<char, int> hashMap;
    for (auto ch : str) {
        hashMap[ch]++;
    }
    int count = 0;
    for (auto it : hashMap) {
        count += it.second & 1;
        if (count > 1) {
            cout << "NO SOLUTION";
            return;
        }
    }
    string firstHalf = "", middleHalf = "";
    for (auto it : hashMap) {
        if (!(it.second & 1)) {
            firstHalf += string(it.second / 2, it.first);
        }
    }
    for (auto it : hashMap) {
        if (it.second & 1) {
            middleHalf += string(it.second, it.first);
        }
    }
    string lastHalf(firstHalf.rbegin(), firstHalf.rend());
    string ans = firstHalf + middleHalf + lastHalf;
    cout << ans;
}