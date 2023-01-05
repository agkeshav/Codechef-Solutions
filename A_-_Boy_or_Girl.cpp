#include<bits/stdc++.h>
using namespace std;
int countDistinct(string str){
    set<char> st;
    for(int i=0;i<str.length();i++){
        st.insert(str[i]);
    }
    return st.size();
}
int main(){
    string str;
    cin>>str;
    int count = countDistinct(str);
    if(count%2 !=0){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }
return 0;
}