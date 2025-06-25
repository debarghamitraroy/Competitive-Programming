#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
	int n;
	cin >> n;
	int count = 0;
	for (int i = 0; i * (i + 1) * (i + 2) / 6 <= n; i++) {
		count++;
	}
	cout << count - 1;
}