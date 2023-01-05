#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool solve(int a, int b, int c)
{
    bool flag = false;
    if ((a + b) % 2 != 0)
    {
        flag = true;
    }
    else if ((b + c) % 2 != 0)
    {
        flag = true;
    }
    else
    {
        flag = false;
    }
    return flag;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (solve(a,b,c))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}