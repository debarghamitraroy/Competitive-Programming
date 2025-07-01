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
        int total_income = n * 50;
        int sugarcane = (total_income * 20) / 100;
        int shop_rent = (total_income * 30) / 100;
        int profit = total_income - (2 * sugarcane + shop_rent);
        cout << profit << '\n';
    }
}
