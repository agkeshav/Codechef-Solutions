#include <bits/stdc++.h>
using namespace std;
#define lli long long int
    void solve(){
        int n;cin>>n;
        lli k;cin>>k;
        vector<lli> v;
        for(int i=0;i<n;i++){
            lli x;cin>>x;
            v.push_back(x);
        }
        lli sum = 1;
        for(int i=0;i<n;i++){
            sum=(sum*v[i])%k;
        }
        lli rem = sum%k;
        if( rem==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}