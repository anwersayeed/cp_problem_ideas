//reversing a nmber
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        string s = "";
        int sz = n.length();
        for(int i=0;i<sz;i++){
            if(s=="" && n[sz-i-1]=='0'){
                continue;
            }
            s+=n[sz-i-1];
        }
        cout<<s<<endl;
    }
	// your code goes here
	return 0;
}
