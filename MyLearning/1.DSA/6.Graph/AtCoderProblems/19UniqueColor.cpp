#include<bits/stdc++.h>
#define int long long
using namespace std;

/*

https://atcoder.jp/contests/abc198/tasks/abc198_e
AC

*/

void dfs(int node,vector<int> adj[],vector<int> &vis,map<int,int> &mp,vector<int> &color,vector<int> &ans){

    vis[node]=1;
    if(mp[color[node]]==0){
        ans.push_back(node);
    }
    mp[color[node]]++;

    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,mp,color,ans);
        }
    }


    mp[color[node]]--;



    
}
void myf(){

    int n;cin>>n;
    vector<int> color(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>color[i];
    }
    vector<int> adj[n+1];
    for(int i=1;i<n;i++){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int> vis(n+1,0);
    map<int,int> mp;
    vector<int> ans;
    dfs(1,adj,vis,mp,color,ans);
    sort(ans.begin(),ans.end());
    for(auto it:ans){
        cout<<it<<endl;
    }
    








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