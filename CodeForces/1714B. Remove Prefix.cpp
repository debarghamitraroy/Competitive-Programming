#include <iostream>
#include <climit>
#include <vector>
using namespace std;

void solve();

int main()
{
    solve();
    return 0;
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int maxx = INT_MIN;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            maxx = max(maxx, arr[i]);
        }
        vector<bool> freq(maxx + 1, false);
        int res = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (freq[arr[i]] == 0)
            {
                res++;
                freq[arr[i]] = 1;
            }
            else
                break;
        }
        cout << n - res << '\n';
    }
}