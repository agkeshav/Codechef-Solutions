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
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        int even = 0;
        int odd = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (even == 0 || odd == 0)
        {
            cout << 0 << endl;
        }
        else
            cout << v.size() - odd << endl;
    }
    return 0;
}