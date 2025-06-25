#include <iostream>
#include <vector>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	if (n == 1)
		cout << "1";
	else {
		int count = 1, ans = 0;;
		for (int i = 0 ; i < n - 1; i++) {
			if (arr[i] < arr[i + 1])
				count++;
			else
				count = 1;
			ans = max(ans, count);
		}
		cout << ans;
	}
}