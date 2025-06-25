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
		vector<int> arr(3);
		for (auto &it : arr) {
			cin >> it;
		}
		int empty = count(arr.begin(), arr.end(), 0);
		if (empty >= 2)
			cout << "Water filling time\n";
		else
			cout << "Not now\n";
	}
}