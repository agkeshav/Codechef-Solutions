#include<bits/stdc++.h>
using namespace std;
void solve(){
    int w,x,y,z;
    cin>>w>>x>>y>>z;
    int ans = w;
    
        ans = w+ (x-y)*z;
    
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
         solve();
    }
return 0;
}