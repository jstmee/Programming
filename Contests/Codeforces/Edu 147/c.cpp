#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    string s;cin>>s;
    int n=s.size();
    // codeforces
    // cdfrcs
    // cfc 
    // cc
    // mewheniseearulhiiarul
    
    // 17
    // 8
    // 4
    // 2
    // 1
    map<char,int > mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    int ans=INT_MIN;
    for(auto p:mp){
        ans=max(ans,p.second);

    }
    // 18
    // 9
    // 4
    // 2
    // 1
    int step=0;
    int q=n-ans;
    if(q==0){
        cout<<0<<endl;
        return;
    }
    
    while(true){
        if(q<=1){
            break;
        }
        q=q/2;
        step++;

    }
    cout<<step<<endl;
    return;



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