#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        int x,y,k;cin>>x>>y>>k;
        int a = abs(y-x);
        if(a%k == 0){
            cout<<a/k<<endl;
        }
        else{
            cout<<a/k +1 <<endl;
        }
    }
    return 0;
}