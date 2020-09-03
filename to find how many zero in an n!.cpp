//to find how many zero in an n!
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count5 = 0, count2 = 0;
        int temp =n;
        while(n!=0){
            n = n/5;
            count5+=n;
        }
        while(temp!=0){
            temp = temp/2;
            count2+=temp;
        }
        cout<<min(count2,count5)<<endl;
    }
	// your code goes here
	return 0;
}
