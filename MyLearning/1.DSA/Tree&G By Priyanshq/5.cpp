#include<bits/stdc++.h>
#define int long long
using namespace std;

/*

https://codeforces.com/problemset/problem/580/C

accepeted

*/
void dfs(int node,int parent,vector<int> adj[],vector<int> &cat,vector<int> &leaf,int &ans,int maxsofar,int m){
    if(cat[node]==1){
        maxsofar++;
    }
    else{
        maxsofar=0;
    }
    if(maxsofar>m){
        return;
    }
    if(leaf[node]==1 && maxsofar<=m && parent!=node){
        ans++;
        return;

    }
    for(auto it:adj[node]){
        if(parent!=it){
            
            dfs(it,node,adj,cat,leaf,ans,maxsofar,m);
        }
    }
    
    



}
void myf(){

    int n,m;cin>>n>>m;
    vector<int> cat(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>cat[i];
    }
    vector<int>adj[n+1];
    for(int i=1;i<n;i++){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);

    }

    int ans=0;
    vector<int> leaf(n+1,0);
    for(int i=1;i<=n;i++){
        if(i!=1){
            if(adj[i].size()==1){
                leaf[i]=1;
            }
        }
    }
    // if(cat[1]==1){

    //     dfs(1,-1,adj,cat,leaf,ans,1,m);
    // }
    // else{
    //     dfs(1,-1,adj,cat,leaf,ans,0,m);

    // }
    dfs(1,-1,adj,cat,leaf,ans,0,m);
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