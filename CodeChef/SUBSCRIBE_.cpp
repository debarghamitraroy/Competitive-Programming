#include <iostream>
#include <cmath>
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
		double n, x;
		cin >> n >> x;
		int subscriptions = ceil(n / 6);
		int price = subscriptions * x;
		cout << price << '\n';
	}
}