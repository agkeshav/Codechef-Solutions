#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x,y,z;cin >> x >>y >> z;
        int arr[3] = {x,y,z};
        vector<int> v(arr,arr+3);
        int count_with_not0 = 0;
        for (int i = 0; i<3; i++){
            if(v[i]!=0){
                v[i]--;
                count_with_not0++;
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        if(v[2]>=2){
            cout<<count_with_not0+3<<endl;
        }
        else if(v[2]==1){
            if(v[0]>=2){
            cout<<count_with_not0+2<<endl;

            }
            else{
                cout<<count_with_not0+1<<endl;
            }
        }
        else{

        if(v[1]==0){
            cout<<count_with_not0<<endl;
        }
        else{
            cout<<count_with_not0+1<<endl;
        }
        }


        
    }
    return 0;
}