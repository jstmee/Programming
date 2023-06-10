#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    string s;cin>>s;
    int a=0,b=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='v') a++;
        else b++;
    }
    cout<<a+2*b<<endl;return;


}



int32_t main(){
    #ifndef ONLINE_JUDGE
           freopen("D:\\Programming\\C++ Programming\\input.txt","r",stdin);
           freopen("D:\\Programming\\C++ Programming\\output.txt","w",stdout);
    #endif
    int t=1;
    // cin>>t;
    
    while(t--){
        myf();
    }
    return 0;
}