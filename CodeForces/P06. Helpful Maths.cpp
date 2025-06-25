#include <iostream>
#include <algorithm>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
	string str;
	cin >> str;
	str.erase(remove(str.begin(), str.end(), '+'), str.end());
	sort(str.begin(), str.end());
	int n = str.length();
	for (int i = 0; i < n - 1; i++) {
		cout << str[i] << '+';
	}
	cout << str[n - 1];
}