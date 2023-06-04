/*

submited
https://atcoder.jp/contests/abc277/tasks/abc277_c

*/

#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int n;cin>>n;
    map<int,vector<int>> adj;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    queue<int> q;
    q.push(1);
    // set<int> s;
    // s.insert(1);
    map<int,int> mp;
    mp[1]=1;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto it:adj[node]){
            if(mp.find(it)==mp.end()){
                mp[it]=1;
                q.push(it);
            }
        }
    }
    int ans=INT_MIN;

    for(auto it:mp){
        ans=max(ans,it.first);

    }
    cout<<ans<<endl;

    



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