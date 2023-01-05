#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
        cin >> n;
        ll k;
        cin >> k;
        int minimumK = n * (n + 1) / 2;
        if (minimumK > k)
        {
            cout << -1 << endl;
        }
        else
        {
            if (n == 1)
            {
                cout << k << endl;
            }
            else
            {
                vector<ll> v;
                for (int i = 0; i < n - 1; i++)
                {
                    v.push_back(1);
                }
                ll x = k - minimumK+1;
                v.push_back(x);
                for (int i=0;i<v.size();i++){
                    cout<<v[i]<<" ";
                }
                cout<<endl;
            }

        }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}