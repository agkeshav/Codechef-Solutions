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
        ll l, k;
        cin >> l >> k;
        if (l % k == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}