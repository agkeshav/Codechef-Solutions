#include <bits/stdc++.h>
using namespace std;
int lcs(string a, string b, int m, int n)
{
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }

            else if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }

            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[m][n];
}
void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    string b = a;
    reverse(b.begin(), b.end());

    int lenA = a.length();
    int lenB = b.length();
    cout << lcs(a, b, lenA, lenB) / 2 << endl;
}
int main()
{
    // your code goes here
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
