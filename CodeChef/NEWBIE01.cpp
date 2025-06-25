#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int arr[5], sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << sum;
}