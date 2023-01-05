#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;
    while(t--){
        ll n,k;cin >> n>>k;
        if(n ==1){
            cout<<k<<endl;
        }
        else{
            if(n==k){
                cout<<1<<endl;
            }
            else if(n>k){
                ll a = n%k;
                cout<<a+1<<endl;
            }
            else{
                ll a = k/n;
                cout<<a+1<<endl;
            }
        }
    }
return 0;
}