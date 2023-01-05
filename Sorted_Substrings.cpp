#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        vector<char> v;
        for(int i=0;i<n;i++){
            v.push_back(s[i]);
        }
        int a = 0;
        int b = 0;
        int c = 0;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]=='0' && v[i+1]=='1'){
                a++;
            }
        }
        for(int i=0;i<v.size()-1;i++){
            if((v[i]=='0' && v[i+1]=='0')|| (v[i]=='1' && v[i+1]=='1')){
                b++;
            }
        }
        cout<<n-a-b-1<<endl;
       
    }
}