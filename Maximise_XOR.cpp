#include <bits/stdc++.h>
using namespace std;
#define ll long long
void print(string ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
    cout << endl;
}
void solve()
{
    string a;
    cin >> a;
    string b;
    cin >> b;
    int n = a.size();
    int one = 0;
    int zero = 0;
    string c = a + b;
    for (int i = 0; i < 2 * n; i++)
    {
        if (c[i] == '1')
        {
            one++;
        }
        else
        {
            zero++;
        }
    }
    int noOfOnes = 0;
    if (one <= zero)
    {
        noOfOnes = one;
    }
    else
    {
        noOfOnes = zero;
    }
    string ans;
    for (int i = 0; i < noOfOnes; i++)
    {
        ans += '1';
    }
    int noOfzeros = n - noOfOnes;
    for (int i = 0; i < noOfzeros; i++)
    {
        ans += '0';
    }
    print(ans);
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
