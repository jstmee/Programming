#include<bits/stdc++.h>
#define int long long
using namespace std;

/*

https://codeforces.com/problemset/problem/763/A
*/

void dfs(int node,int parent,vector<int> adj[],vector<int> &leaf,vector<int> &vis){

    for(auto it:adj[node]){
        if(parent!=node){

        }
    }





    
}
void myf(){

    int n;cin>>n;
    vector<int> adj[n+1];
    for(int i=1;i<n;i++){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> col(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>col[i];
    }
    vector<int> leaf(n+1,0);
    vector<int> vis(n+1,0);
    for(int i=1;i<=n;i++){
        if(adj[i].size()==1){
            leaf[i]=1;
            vis[i]=1;
        }
    }
    

    dfs(1,-1,adj,leaf,vis);





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