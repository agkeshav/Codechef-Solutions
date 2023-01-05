#include <bits/stdc++.h>
using namespace std;
void countFreq(long long int arr[], long long int n)
{
    unordered_map<long long int, long long int> mp;
 
    // Traverse through array elements and
    // count frequencies
    for (long long int i = 0; i < n; i++)
        mp[arr[i]]++;
 
    // Traverse through map and print frequencies
    long long int ans = 0;
    for (auto x : mp){
    // int c=0;
       
            long long int a = (pow(x.second,2)-x.second)/2;
            ans = ans + a;
        
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        
        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
            
        }
        countFreq(arr,n);
    }
    return 0;
}