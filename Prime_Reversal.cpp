#include <bits/stdc++.h>
using namespace std;
#define ll long long
int freq(string str){
    unordered_map<char,int> mp;
    for(int i=0; i<str.length();i++){
        mp[str[i]]++;
    }
    int a = 0;
    for(auto x:mp){
        if(x.first=='0'){
            return x.second;
        }
    }
    return a;
}
void solve(){
    int n;
        cin >> n ;
        string a,b;cin >> a>>b;
        int diff = 0;
        if(a==b){
            cout<<"YES"<<endl;
        }
        else{
            int c = 0;
            int d = 0;
            // for(int i=0;i<n;i++){
            //     if(a[i]=='0'){
            //         c++;
            //     }
            //     if(b[i]=='0'){
            //         d++;
            //     }
            // }
            c = freq(a);
            d = freq(b);
            if(d==c){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        
    }
    return 0;
}
