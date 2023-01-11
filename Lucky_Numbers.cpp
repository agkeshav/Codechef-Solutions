#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    bool flag = false;
	    long long n;cin>>n;
	    while(n){
	        int digit = n%10;
	        if(digit == 7){
	            flag = true;
	            break;
	        }
	        n/=10;
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
