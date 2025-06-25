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
		int a, b, n;
		cin >> a >> b >> n;
		if (a > b)
			swap(a, b);
		int res = 0, count = 0;
		while (res <= n) {
			res = a + b;
			a = b;
			b = res;
			count++;
		}
		cout << count << '\n';
	}
}