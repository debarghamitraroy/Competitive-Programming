#include <iostream>
#include <stack>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    stack<int> s;
    int q;
    cin >> q;
    while (q--) {
        int books;
        cin >> books;
        if (books != -1) {
            int n;
            cin >> n;
            s.push(n);
        } else if (books == -1 && !s.empty()) {
            cout << s.top() << '\n';
            s.pop();
        } else
            cout << "kuchbhi?\n";
    }
}