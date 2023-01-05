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
        string s;
        cin >> s;
        if (s.size() == 2 || s.size() == 1)
        {
            cout << s << endl;
        }
        else
        {
            int count = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '1')
                {
                    count++;
                }
            }
            for (int i = 0; i < s.size() - count; i++)
            {
                cout << 0;
            }
            for (int i = 0; i < count; i++)
            {
                cout << 1;
            }
            cout << endl;
        }
    }
    return 0;
}