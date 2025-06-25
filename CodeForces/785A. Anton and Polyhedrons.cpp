#include <iostream>
#include <map>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    map<string, int> mpp;
    mpp["Tetrahedron"] = 4;
    mpp["Cube"] = 6;
    mpp["Octahedron"] = 8;
    mpp["Dodecahedron"] = 12;
    mpp["Icosahedron"] = 20;
    int count = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        count = count + mpp[str];
    }
    cout << count;
}