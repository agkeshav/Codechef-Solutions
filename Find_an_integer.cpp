#include <bits/stdc++.h>
using namespace std;
#define lli long long int
lli gcd(lli a, lli b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    lli x,y;cin>>x>>y;
	   if(x== 1 && y==1 ){
	       cout<<5<<endl;
	   }
	   else{
	       lli n = x*y - x- y;
	       if(n==0){
	           cout<<4<<endl;
	       }
	       else if(n==-1){
	           lli ans = max(x,y);
	           cout<<ans-1<<endl;
	       }
	       else{
	           cout<<n<<endl;
	       }
	       
	   }
	   
	    
	    
	}
	return 0;
}
