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
    int maxx = INT_MIN;
    int minn = INT_MAX;
    int min_num = 0, ans = 0;
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        minn = min(arr[i], minn);
        maxx = max(arr[i], maxx);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == minn)
        {
            min_num = i;
            break;
        }
    }
    for (int i = min_num; i < n - 1; i++)
    {
        swap(arr[i], arr[i + 1]);
        ans++;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == maxx)
            break;
        else
            ans++;
    }
    cout << ans;
}