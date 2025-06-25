#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
	int n, l;
	cin >> n >> l;
	vector<int>arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	double d = 2 * max(arr[0], (l - arr[n - 1]));
	for (int i = 1; i < n; i++) {
		d = max(d, (double)(arr[i] - arr[i - 1]));
	}
	cout << fixed << setprecision(10) << d / 2;
}