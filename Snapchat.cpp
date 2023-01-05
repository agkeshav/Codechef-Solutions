#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<int> a;
	    vector<int> b;
	    for(int i=0;i<n;i++){
	        int x;cin>>x;
	        a.push_back(x);
	    }
	    for(int i=0;i<n;i++){
	        int x;cin>>x;
	        b.push_back(x);
	    }
	    vector<int> ans;
	    int cnt = 0;
	    for(int i=0;i<n;i++){
	        if(a[i]== 0 || b[i]== 0){
	            ans.push_back(cnt);
	            cnt=0;
	        }
	        else{
                cnt++;
            }
	    }
        ans.push_back(cnt);
	    sort(ans.begin(),ans.end());
	    cout<<ans[ans.size()-1]<<endl;
	}
	return 0;
}
