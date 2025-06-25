#include <iostream>
#include <algorithm>
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
        vector<int> stack;
        int radius;
        for (int i = 0; i < n; i++) {
            cin >> radius;
            auto it = upper_bound(stack.begin(), stack.end(), radius);
            if (it == stack.end())
                stack.push_back(radius);
            else
                *(it) = radius;
        }
        cout << (int)stack.size() << ' ';
        for (int& radius : stack) {
            cout << radius << ' ';
        }
        cout << '\n';
    }
}