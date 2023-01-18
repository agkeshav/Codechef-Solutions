#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<int> a;
	    for(int i=0;i<n;i++){
	        int x;cin>>x;
	        a.push_back(x);
	    }
	    int one = 0;
	    int zero = 0;
	    for(int i=0;i<n;i++){
	        if(a[i]==1){
	            one++;
	        }
	        else{
	            zero++;
	        }
	    }
	    if(zero%2 == 0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
