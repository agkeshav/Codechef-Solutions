#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    int ans = v[0];
    for(int i=1;i<n;i++){
        ans= gcd(ans,v[i]);
    }
    vector<int> ansVector;
    for(int i=0;i<n;i++){
        ansVector.push_back(v[i]/ans);
    }
    for(int i=0;i<n;i++){
        cout<<ansVector[i]<<" ";
    }
    cout<<endl;
    

}
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}