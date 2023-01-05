#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            total += v[i];
        }
        sort(v.begin(), v.end());
        ll sum = 0;
        int p = min(k, n - k);
        for (int i = 0; i < p; i++)
        {
            sum += v[i];
        }

        ll ans = abs(total - 2 * sum);
        cout << ans << endl;
    }
    return 0;
}
