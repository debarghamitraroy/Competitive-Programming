#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n, x;
    cin >> n >> x;
    int count, sum = 0;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    sum = abs(sum);
    count = (sum / x);
    if (sum % x != 0)
        count++;
    cout << count;
}