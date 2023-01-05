#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
         lli n;
        cin >> n;
        lli arr[n];
        for ( lli i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        lli mx = arr[n-1];
        lli mn = arr[0];
        lli check = LONG_LONG_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>0 && arr[i]>check){
                check = arr[i];
            }
        }
        if(check==LONG_LONG_MIN){
            cout<<mx*mx<<" "<<mn*mn<<endl;
        }
        else{
            if(mn>=0 && mx>=0)
                cout<<mn*mn<<" "<<mx*mx<<endl;
            else
                cout<<mn*mx<<" "<<max(mn*mn,mx*mx)<<endl;
        }
        
        

    }
    return 0;
}