#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll m;
        cin >> m;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (m == 1)
        {
            cout << 0 << " ";
            cout << endl;
        }
        else
        {
            ll ans = 0;
            for (int i = 0; i < n; i++)
            {
                int a = abs(arr[i] - 1);
                int b = abs(arr[i] - m);
                ans += max(a, b);
            }
            cout << ans << endl;
        }
    }
    return 0;
}