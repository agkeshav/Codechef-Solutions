#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    string s;cin>>s;
	    vector<char> v;
	    for(int i=0;i<s.size();i++){
	        v.push_back(s[i]);
	    }
	    sort(v.begin(),v.end());
	    int sum = 0;
	    for(int i=0;i<v.size();i++){
	        sum+= (i+1)*((int)v[i] - 96);
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
