#include <bits/stdc++.h>
using namespace std;
int ans(string s);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;cin>>n;
        string s;
        cin >> s;
        int a = ans(s);
        cout << a << endl;
    }
    return 0;
}
int ans(string s)
{
    vector<char> v;
    queue<char> q;
    for (int i = 0; i < s.size(); i++)
    {
        v.push_back(s[i]);
    }
    for (int i=0;i<v.size()-1;i++)
    {
        if (v.at(i+1) == '0')
        {
            q.push(v[i]);
        }
        else
        {
            break;
        }
    }
    int a = 0;
    a = q.size();
    return a + 1;
}