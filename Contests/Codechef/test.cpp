#include <bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    string s;cin>>s;
    for(int i=0;i<n;i=i+2){
        if(i+1<n){
            swap(s[i],s[i+1]);
            
        }
            
    }
    // char p=123-(s[0]-'a');
    for(int i=0;i<n;i++){
        
        char p=123-(s[i]-'a')-1;
        s[i]=p;
    }
    cout<<s<<endl;
    
}
int32_t main() {
	// your code goes here
    #ifndef ONLINE_JUDGE
           freopen("D:\\Programming\\C++ Programming\\input.txt","r",stdin);
           freopen("D:\\Programming\\C++ Programming\\output.txt","w",stdout);
    #endif
	int t=1;
    cin>>t;
	while(t--){
	    myf();
	}
	return 0;
}
