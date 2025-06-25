#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    vector<int> syllables(3);
    for (auto &it : syllables) {
        cin >> it;
    }
    if (count(syllables.begin(), syllables.end(), 5) == 2 && count(syllables.begin(), syllables.end(), 7) == 1)
        cout << "YES";
    else
        cout << "NO";
}