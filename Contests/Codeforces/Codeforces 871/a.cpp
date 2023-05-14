#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    string s;cin>>s;
    string ss="codeforces";
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=ss[i]){
            ans++;
        }
    }
    cout<<ans<<endl;return;



}



int32_t main(){
    #ifndef ONLINE_JUDGE
           freopen("D:\\Programming\\C++ Programming\\input.txt","r",stdin);
           freopen("D:\\Programming\\C++ Programming\\output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    
    while(t--){
        myf();
    }
    return 0;
}