#include <iostream>
#include <vector>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
	pair<char, char> pr;
	cin >> pr.first >> pr.second;
	vector<pair<char, char>> cards(5);
	for (int i = 0; i < 5; i++) {
		cin >> cards[i].first >> cards[i].second;
	}
	for (int i = 0; i < 5; i++) {
		if (cards[i].first == pr.first || cards[i].second == pr.second) {
			cout << "YES";
			return;
		}
	}
	cout << "NO";
}