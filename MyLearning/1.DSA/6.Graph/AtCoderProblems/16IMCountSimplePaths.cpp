#include<bits/stdc++.h>
#define int long long
using namespace std;

/*
accpted
https://atcoder.jp/contests/abc284/tasks/abc284_e

*/

void dfs(int node,vector<int> &vis,vector<int> adj[],
int &ans){
    if(ans==1e6){
        return;
    }
    vis[node]=1;
    ans++;
    
    for(auto it:adj[node]){
        if(!vis[it]){
            // dp[it]=dp[node]+1;
            dfs(it,vis,adj,ans);
        }
    }
    vis[node]=0;
}
void myf(){

    int n,m;cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> vis(n+1,0);
    // vector<int> dp(n+1,0);
    int ans=0;
    // dp[1]=1;
    dfs(1,vis,adj,ans);
    int temp=1e6;
    cout<<min(ans,temp)<<endl;
    // cout<<ans<<endl;


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