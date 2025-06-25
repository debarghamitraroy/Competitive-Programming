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
		int x, y;
		cin >> x >> y;
		int bags = (x * y) / 100;
		cout << bags << '\n';
	}
}