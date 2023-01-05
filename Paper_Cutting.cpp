#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n % k == 0)
        {
            int a = n / k;
            cout << a * a << endl;
        }
        else
        {
            int a = n / k;
            cout << a * a << endl;
        }
    }
    return 0;
}