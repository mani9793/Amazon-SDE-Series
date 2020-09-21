/*#include <iostream>
#include<string>
#include<algorithm>
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,i,flag=0;
	long len;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    sort(s.begin(),s.end());
	    len=s.length();
	    for(i=0;i<len;i++){
	        if(s[i]==s[i+1]){
	            flag=1;
	            cout<<0;
	            break;
	        }
	        break;
	    }
	    if(flag==0){
	        cout<<1<<endl;
	       // break;
	    }
	}
	return 0;
}
