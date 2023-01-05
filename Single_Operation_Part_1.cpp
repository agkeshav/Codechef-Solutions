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
        vector<char> v;
        for(int i=0;i<s.size();i++){
            v.push_back(s[i]);
        }
        int c=  0;
        for(int i=0;i<v.size();i++){
            if(v.at(i)=='1'){
                c++;
            }
            else{
                break;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}