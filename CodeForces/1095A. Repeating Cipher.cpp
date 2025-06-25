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
	string str;
	cin >> str;
	string ans = "";
	int counter = 0;
	for (int i = 0; i < n; i += counter) {
		ans += str[i];
		counter++;
	}
	cout << ans;
}