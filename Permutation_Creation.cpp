#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
        if (n == 2 || n == 3)
        {
            cout << -1 << endl;
        }
        else
        {
            if (n % 2 != 0)
            {
                int a = n / 2;
                for (int i = 0; i < a; i++)
                {
                    cout << n - 2 * i << " ";
                }
                cout << 1 << " ";
                while (a-- > 0)
                {
                    cout << 2 * a + 2 << " ";
                }
            }
            else
            {
                int a = n / 2;
                for (int i = 1; i <= a; i++)
                {
                    cout << n - 2 * i + 1 << " ";
                }
                while (a-- > 0)
                {
                    cout << 2 * a + 2 << " ";
                }
            }
        }
    }

    return 0;
}