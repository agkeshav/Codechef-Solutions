#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, v;
        cin >> n >> k >> v;
        vector<int> v1;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            v1.push_back(x);
        }
        long sum1 = v*(n+k);
        long sum2 = 0;
        for(int i=0;i<v1.size();i++){
            sum2+= v1[i];
        }
        if(sum1<=sum2){
            cout<<-1<<endl;
        }
        else{
            if((sum1-sum2)%k == 0){
                int a = (sum1-sum2)/k;
                cout<<a<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }

    return 0;
}