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
        int odd = 0;
        unordered_map<int,int>mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }
        for(auto x:mp){
            if(x.first%2 != 0){
                odd = odd + x.second;
            }
        }
        if (odd == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (odd % 2 == 0)
            {
                cout << "YES" << endl;
            }

            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}