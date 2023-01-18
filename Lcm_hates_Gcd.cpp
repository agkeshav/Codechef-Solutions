#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b)
{
    ll result = min(a, b); // Find Minimum of a nd b
    while (result > 0)
    {
        if (a % result == 0 && b % result == 0)
        {
            break;
        }
        result--;
    }
    return result; // return gcd of a nd b
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll x = __gcd(a, b);
    ll lcm = (a * x) / __gcd(a, x);
    ll g = __gcd(b, x);
    ll ans = lcm - g;
    cout << ans << endl;
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
