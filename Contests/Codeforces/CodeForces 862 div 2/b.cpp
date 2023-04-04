#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    string s;cin>>s;
    pair<char,int> pp;
    pp.first='{';
    pp.second=-1;
    for(int i=n-1;i>=0;i--){
        if(s[i]<pp.first){
            pp.first=s[i];
            pp.second=i;
        }
        
    }
    string ans="";
    ans.push_back(pp.first);
    for(int i=0;i<n;i++){
        if(s[i]==pp.first && i==pp.second){
            continue;
        }
        ans.push_back(s[i]);
    }
    cout<<ans<<endl;


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