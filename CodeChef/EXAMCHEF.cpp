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
		double x, y, z;
		cin >> x >> y >> z;
		double total_students = x * y;
		double passed_percent = z / total_students * 100;
		if (passed_percent > 50)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}