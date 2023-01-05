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
        for (int i = 0; i < 2*n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        unordered_map<ll, ll> m;
        for (int i = 0; i < 2*n; i++)
            m[v[i]]++;

        bool flag = true;
        for(auto x:m){
            if(x.second >2){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}