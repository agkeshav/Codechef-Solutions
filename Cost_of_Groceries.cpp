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
        int n, x;
        cin >> n >> x;
        vector<int> a;
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(a[i]>=x){
                sum+=b[i];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
