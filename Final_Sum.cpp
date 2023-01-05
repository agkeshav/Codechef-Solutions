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
        int n, q;
        cin >> n >> q;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        vector<pair<int, int>> p;
        for (int i = 0; i < q; i++)
        {
            int x, y;
            cin >> x >> y;
            p.push_back(make_pair(x, y));
        }
        int a = 0;
        for (int i = 0; i < q; i++)
        {
            int x = p[i].first;
            int y = p[i].second;
            if ((y - x) % 2 == 0)
            {
                a++;
            }
        }
        int sum = 0;
        for (int i = 0; i < v.size(); i++)
        {
            sum += v[i];
        }
        cout << sum + a << endl;
    }

    return 0;
}