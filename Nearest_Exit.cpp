#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        int x;cin>>x;
        int a = x-1;
        int b = 100-x;
        if(a<b){
            cout<<"LEFT"<<endl;
        }
        else{
            cout<<"RIGHT"<<endl;
        }
    }
    return 0;
}