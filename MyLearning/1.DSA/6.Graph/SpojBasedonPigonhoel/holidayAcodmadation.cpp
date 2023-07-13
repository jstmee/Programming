#include<bits/stdc++.h>
#define int long long
using namespace std;

/*
https://www.spoj.com/problems/HOLI/

based on pigion hole principle

ACCEPTED

*/
int p=1;
int dfs(int node,int parent,vector<pair<int,int>> adj[],int &ans,int n){
    int sz=1;
    for(auto it:adj[node]){
        if(parent!=it.first){
            int u=it.first;
            int wt=it.second;
            int nofnode=dfs(u,node,adj,ans,n);
            ans+=2*min(n-nofnode,nofnode)*wt;
            sz+=nofnode;
        }
    }
    return sz;
}
void myf(){
    int n;cin>>n;
    vector<pair<int,int>> adj[n+1];
    int edges=n-1;
    for(int i=1;i<=edges;i++){
        int u,v,wt;cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }

    int ans=0;

    dfs(1,-1,adj,ans,n);
    
    cout<<"Case #"<<p++<<": "<<ans<<endl;



}



int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
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