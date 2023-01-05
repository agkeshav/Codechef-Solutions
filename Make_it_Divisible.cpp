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
        int n;
        cin >> n;
        vector<int> v(n, 3);
        if (n % 3 != 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << v[i];
            }
            cout << endl;
        }
        else
        {
            v[n - 1] = 1;
            v[n - 2] = 2;
            for (int i = 0; i < n; i++)
            {
                cout << v[i];
            }
            cout << endl;
        }
    }
    return 0;
}