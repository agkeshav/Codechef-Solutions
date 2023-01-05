#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a;
        vector<int> b;
        int n;
        cin >> n;
        ll sum = n * (n + 1);
        sum /= 2;
        if (sum % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < n / 4; i++)
            {
                a.push_back(i + 1);
            }
            for (int i = 3 * n / 4; i < n; i++)
            {
                a.push_back(i + 1);
            }
            for (int i = n / 4; i < 3 * n / 4; i++)
            {
                b.push_back(i + 1);
            }
            cout << "YES" << endl;
            for (int i = 0; i < a.size(); i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            for (int i = 0; i < b.size(); i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
