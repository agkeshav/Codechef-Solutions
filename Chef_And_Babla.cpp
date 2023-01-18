#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<ll> a;
	    for(int i=0;i<n;i++){
	        ll x;cin>>x;
	        a.push_back(x);
	    }
	    for(int i =0;i<n;i++){
	        if(a[i]<0){
	            a[i]=-a[i];
	        }
	    }
	    sort(a.begin(),a.end());
	    cout<<a[0]-1<<endl;
	    
	}
	return 0;
}
