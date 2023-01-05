#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        lli a[n];
        lli b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
         for(int i=0;i<n;i++){
             cin>>b[i];
         }
         vector<pair<lli,lli>> v;
         for(int i=0;i<n;i++){
            v.push_back(make_pair(a[i],b[i]));
         }
         sort(v.begin(),v.end());

         vector<lli> temp1,temp2,temp3;
        // lli temp = n;
        // for(int i=0;i<n;i++){
        //     if(v[i].second>v[i].first){
        //         temp1.push_back(1);
        //     }
        //     else{
        //         temp1.push_back(0);
        //     }
        // }
        // sort(temp1.begin(),temp1.end());
        lli count = 0;
     
     bool flag = false;
        for(lli i = 1;i<n-1;i++){
                for(int j=0;j<i;j++){
                    if(v[j].second<v[j+1].second){
                        flag = true;
                    }
                }
           if(flag){
            count++;
           }
        }
        cout<<count<<endl;

        
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         if(a[j]<a[i]){
        //             temp1.push_back(j+1);
        //         }
        //     }
        //     for(int j=0;j<n;j++){
        //         if(b[j]<b[i]){
        //             temp2.push_back(j+1);
        //         }
        //     }
        //     set<lli> s;
        //     for(int i=0;i<temp1.size();i++){
        //         if(temp1.size()!=0)
        //         s.insert(temp1[i]);
        //     }
        //     for(int i=0;i<temp2.size();i++){
        //         if(temp2.size()!=0)
        //         s.insert(temp2[i]);
        //     }
        //     temp1.clear();
        //     temp2.clear();
        //     temp3.push_back(s.size());
        // }
        // sort(temp3.begin(),temp3.end());
        // cout<<count(temp3.begin(),temp3.end(),temp3[temp3.size()-1])<<endl;

    }
return 0;
}