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
        int n;
        cin >> n;
        int arr[] = {3, 2};
        int i = 0, count = 0;
        if (n == 1)
            cout << "2\n";
        else {
            while (n > 0) {
                count = count + (n / arr[i]);
                n = n - (arr[i] * (n / arr[i]));
                i++;
            }
            cout << count + n << '\n';
        }
    }
}