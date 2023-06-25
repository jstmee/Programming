#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        string s;cin>>s;
        v[i]=s;
    }
    reverse(v.begin(),v.end());
    map<string,int> mp;
    vector<string> ans;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
        if(mp[v[i]]==1){
            ans.push_back(v[i]);
        }
        
    }
    string myans="";
    for(auto it:ans){
        int sz=it.size();
        myans.push_back(it[sz-2]);
        myans.push_back(it[sz-1]);
    }
    cout<<myans<<endl;


}



int32_t main(){
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