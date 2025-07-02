#include <iostream>
#include <vector>
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
        int n;
        cin >> n;
        vector<int> oddDivisors, evenDivisors;
        for (int i = 1; i * i <= n; ++i) {
            if (n % i == 0) {
                if (i % 2 == 0)
                    evenDivisors.push_back(i);
                else
                    oddDivisors.push_back(i);
                if (i * i != n) {
                    int otherDivisor = n / i;
                    if (otherDivisor % 2 == 0)
                        evenDivisors.push_back(otherDivisor);
                    else
                        oddDivisors.push_back(otherDivisor);
                }
            }
        }
        cout << oddDivisors.size() << ' ' << evenDivisors.size() << '\n';
    }
}
