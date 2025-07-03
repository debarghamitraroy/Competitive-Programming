#include <iomanip>
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
    cout << n << '\n';
    long long int ll;
    cin >> ll;
    cout << ll << '\n';
    char ch;
    cin >> ch;
    cout << ch << '\n';
    float f;
    cin >> f;
    cout << fixed << setprecision(3) << f << '\n';
    double d;
    cin >> d;
    cout << fixed << setprecision(9) << d;
}