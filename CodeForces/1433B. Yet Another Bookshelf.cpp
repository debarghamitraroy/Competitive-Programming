#include <iostream>
#include <vector>
#include <algorithm>
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
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		while (!arr.back()) {
			arr.pop_back();
		}
		reverse(arr.begin(), arr.end());
		while (!arr.back()) {
			arr.pop_back();
		}
		cout << count(arr.begin(), arr.end(), 0) << '\n';
	}
}