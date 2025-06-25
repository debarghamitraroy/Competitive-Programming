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
		int x;
		cin >> x;
		if (10 - x >= 3)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}