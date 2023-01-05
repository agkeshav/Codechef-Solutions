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
        string operation = " ";
        string d = " ";
        int op = 0, digit = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '+' || s[i] == '-')
            {
                operation += s[i];
                op++;
            }
            else
            {
                d += s[i];
                digit++;
            }
        }
        sort(operation.begin(), operation.end(), greater<int>());
        sort(d.begin(), d.end(), greater<int>());
        string ans = "";
        for (int i = 0; i < digit - op; i++)
        {
            ans += d[i];
        }
        int i = digit - op;
        int j = op - 1;
        while (op--)
        {
            ans += operation[j];
            ans += d[i];
            i++;
            j--;
        }
        cout << ans << endl;
    }
    return 0;
}