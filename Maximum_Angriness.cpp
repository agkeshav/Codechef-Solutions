#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
void solve(ll n, ll k)
{
    if (k >= (n / 2))
    {
        cout << n * (n - 1) / 2 << endl;
    }
    else
    {
        lli unswaps = ((n - 2 * k)) * (n - 2 * k - 1) / 2;
        lli ans = (n * (n - 1) / 2) - unswaps;
        cout << ans << endl;
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
        ll n, k;
        cin >> n >> k;
        solve(n, k);
    }
    return 0;
}