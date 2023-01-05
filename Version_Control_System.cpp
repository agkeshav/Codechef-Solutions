#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a;
        vector<int> b;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }
        set<int> s;
        for (int i = 0; i < m; i++)
        {
            s.insert(a[i]);
        }
        for (int i = 0; i < k; i++)
        {
            s.insert(b[i]);
        }
        int ans2 = n - s.size();
        int ans1 = 0;
        for (int i = 0; i < m; i++)
        {

            for (int j = 0; j < k; j++)
            {

                if (a[i] == b[j])
                {

                    ans1++;
                }
            }
        }
        cout << ans1 << " " << ans2 << endl;
    }
    return 0;
}
