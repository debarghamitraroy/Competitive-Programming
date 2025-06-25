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
        string str1, str2;
        cin >> str1 >> str2;
        int n1 = str1.size(), n2 = str2.size();
        int large[26] = {0}, small[26] = {0};
        for (char ch : str1) {
            if (ch >= 'A' && ch <= 'Z')
                large[ch - 'A'] = 1;
            else
                small[ch - 'a'] = 1;
        }
        int count = 0;
        for (char ch : str2) {
            if (ch >= 'A' && ch <= 'Z') {
                if (large[ch - 'A'] == 1)
                    count++;
            } else {
                if (small[ch - 'a'] == 1)
                    count++;
            }
        }
        cout << count << '\n';
    }
}
