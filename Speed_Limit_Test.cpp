#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
         int a,b,x,y;
    cin>>a>>b>>x>>y;
    int alice = a*y;
    int bob = b*x;
    if(alice<bob){
        cout<<"Bob"<<endl;
    }
    else if(alice>bob){
        cout<<"Alice"<<endl;
    }
    else{
        cout<<"Equal"<<endl;
    }
    }
return 0;
}