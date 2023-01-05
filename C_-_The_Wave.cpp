#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,q;cin >> n >> q;
    lli a[n];
    for (lli i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    lli x[q];
    for (int i = 0; i < q; i++)
    {
        cin>>x[i];
    }
    for(int i = 0; i < q; i++){
        lli count = 0;
        // set<lli> st;
        vector<lli> v;
        for(int j=0;j<n;j++){
           v[j]=a[j];
        }
            if(v.data()!=0 ){
                cout<<"0"<<endl;
            }
            else{
                // for(auto it:st){
                //     if(x[i]>it){
                //         count++;
                //     }
                // }
                st.insert(x[i]);
                 int a = sizeof(lli);
                 for(auto it = st.begin(); it!=st.find(x[i]); it++){
                     count++;
                 }
               
                // lli ans = *(st.find(x[i])) - *(st.begin());
                // count = ans/a;
                if(count%2!=0){
                    cout<<"NEGATIVE"<<endl;
                }
                else{
                    cout<<"POSITIVE"<<endl;
                }
            }
    }

    
return 0;
}