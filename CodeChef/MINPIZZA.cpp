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
		int n, x;
		cin >> n >> x;
		int total_pieces = n * x;
		int pizzas = total_pieces / 4;
		if (total_pieces % 4 > 0)
			pizzas++;
		cout << pizzas << '\n';
	}
}