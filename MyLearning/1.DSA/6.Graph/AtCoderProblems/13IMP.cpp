#include<bits/stdc++.h>
#define int long long
using namespace std;

/*

accepted
https://atcoder.jp/contests/abc213/tasks/abc213_d

*/

void dfs(int curr,vector<int> &vis,vector<int> adj[]){

    cout<<curr<<" ";
    vis[curr]=1;
    for(auto it :adj[curr]){
        if(!vis[it]){

            dfs(it,vis,adj);
            cout<<curr<<" ";

            
        }

    }

    



    

}

void myf(){

    int n;cin>>n;
    vector<int> adj[n+1];
    for(int i=1;i<=n-1;i++){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);

    }
    for(int i=1;i<=n;i++){
        // auto it=adj[i];
        sort(adj[i].begin(),adj[i].end());
    }
    vector<int> vis(n+1,0);
    dfs(1,vis,adj);


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