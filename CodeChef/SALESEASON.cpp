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
		if (x > 100 && x <= 1000)
			x -= 25;
		else if (x > 1000 && x <= 5000)
			x -= 100;
		else if (x > 5000)
			x -= 500;
		cout << x << '\n';
	}
}