#include<bits/stdc++.h>
#define int long long
using namespace std;

void dfs(int node,vector<int> &vis,set<int> adj[],int &tempans){
    vis[node]=1;
    tempans++;
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,vis,adj,tempans);
        }
    }
}
void myf(){
    int n,m;cin>>n>>m;
    set<int> adj[n+1];
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        adj[a].insert(b);
        adj[b].insert(a);
    }
    int ans=INT_MIN;
    vector<int> vis(n+1,0);
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            int tempans=0;
            dfs(i,vis,adj,tempans);
            ans=max(ans,tempans);
        }
    }
    cout<<ans<<endl;return;
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