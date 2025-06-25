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
    int countA = 0, countD = 0;
    for (int i = 0; i < n; i++) {
        str[i] == 'A' ? countA++ : countD++;
    }
    countA == countD  ? cout << "Friendship" : countA > countD ? cout << "Anton" : cout << "Danik";
}