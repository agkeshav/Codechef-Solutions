#include <bits/stdc++.h>
using namespace std;

// Function to return LCM of two numbers
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;cin>>x>>y;
        if(y >= (3*x)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
