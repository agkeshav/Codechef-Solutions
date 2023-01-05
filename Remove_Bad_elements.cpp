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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        unordered_map<int, int> freqMap;

        for (int i = 0; i < v.size(); i++)
        {
            freqMap[v[i]]++;
        }
        vector<int> a;
        for (auto it : freqMap)
        {
            a.push_back(it.second);
        }
        sort(a.begin(),a.end());
        cout<<v.size()-a[a.size()-1]<<endl;
    }
    return 0;
}