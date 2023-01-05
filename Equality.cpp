#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
        }
        ll all = sum / (n - 1);
        vector<ll> ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(all - v[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
