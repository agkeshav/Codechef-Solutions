#include <bits/stdc++.h>
using namespace std;
#define lli long long int

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
        lli a[n];
        lli b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<pair<lli, lli>> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(make_pair(a[i], b[i]));
        }
        sort(v.begin(), v.end());
        lli count = 0;

        priority_queue<lli> p;
        for (int j = n - 1; j >= 0; j--)
        {
            p.push(v[j].second);
            if (p.top() == v[j].second)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}