#include <iostream>
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
        int a, b;
        cin >> a >> b;
        if (!((a + b) % 3) && max(a, b) <= 2 * min(a, b))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}