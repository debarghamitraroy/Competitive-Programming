#include <iostream>
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
		string str;
		cin >> str;
		while (str.back() == '0') {
			str.pop_back();
		}
		reverse(str.begin(), str.end());
		while (str.back() == '0') {
			str.pop_back();
		}
		cout << count(str.begin(), str.end(), '0') << '\n';
	}
}