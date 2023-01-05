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
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        vector<int> freq;
        for(auto x:mp){
            freq.push_back(x.second);
        }
        bool flag = true;
        for(int i=0;i<freq.size();i++){
            if(freq[i]%2 !=0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
	}
	return 0;
}
