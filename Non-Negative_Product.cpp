#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        int count = 0;
        bool flag = false;
        for(int i=0;i<n;i++){
            if(v[i]<0){
                count++;
            }
            if(v[i]==0){
                flag = true;
            }
        }
        if(flag){
            cout<<"0"<<endl;
        }
        else if(count%2 == 0){
            cout<<"0"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }

    }
    return 0;
}