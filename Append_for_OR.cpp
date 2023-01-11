#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    int y;cin>>y;
	    vector<int> a;
	    for(int i=0;i<n;i++){
	        int x;cin>>x;
	        a.push_back(x);
	    }
	    // or of all the lements of vector
	    int orofall = a[0];
	    for(int i=1;i<n;i++){
	        orofall = orofall | a[i];
	    }
	   int estimate = orofall^y;
	   // estimated answer doing xor of y with
	   // or of all elements
	   if((orofall | estimate) == y){
	       cout<<estimate<<endl;
	   }
	   else{
	       cout<<-1<<endl;
	   }
}
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
