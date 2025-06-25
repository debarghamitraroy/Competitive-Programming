#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
	string str;
	cin >> str;
	int n = str.length();
	int count = 0;
	unordered_set<char> name;
	for (auto it = str.begin(); it != str.end(); it++) {
		name.insert(*it);
	}
	name.size() % 2 == 0 ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";
}