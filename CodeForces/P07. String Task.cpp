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
    string str;
    cin >> str;
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};
    for (char ch : str) {
        ch = tolower(ch);
        if (find(vowels.begin(), vowels.end(), ch) == vowels.end())
            cout << '.' << ch;
    }
}