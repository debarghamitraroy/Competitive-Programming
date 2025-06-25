#include <iostream>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

ll covidSpread(ll number_of_peoples, ll days) {
    ll count = 1;
    ll i = 1;
    while (i <= days) {
        if (i <= 10) {
            count = count * 2;
            if (count >= number_of_peoples) {
                count = number_of_peoples;
                break;
            }
        } else {
            count = count * 3;
            if (count >= number_of_peoples) {
                count = number_of_peoples;
                break;
            }
        }
        i++;
    }
    return count;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll number_of_peoples, days;
        cin >> number_of_peoples >> days;
        ll count = covidSpread(number_of_peoples, days);
        cout << count << '\n';
    }
}