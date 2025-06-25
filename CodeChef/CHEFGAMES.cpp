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
		vector<int> arr(4);
		for (auto &it : arr) {
			cin >> it;
		}
		int decision = count(arr.begin(), arr.end(), 1);
		if (!decision)
			cout << "IN\n";
		else
			cout << "OUT\n";
	}
}