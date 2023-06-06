#include<bits/stdc++.h>
#define int long long
using namespace std;

void dfs(int node,vector<int> adj[],vector<int> &vis){

    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis);
        }
    }
}

void myf(){
    int n,m;cin>>n>>m;
    vector<pair<int,int>> edges;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        
        edges.push_back({a,b});
    }

    

    vector<int> vis(n+1,0);
    int count=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            count++;
            dfs(i,adj,vis);
        }
    }
    int myans=0;
    for(int i=0;i<m;i++){

        vector<int > adj2[n+1];
        vector<int> vis2(n+1,0);
        for(int j=0;j<m;j++){
            if(j!=i){
                auto it=edges[j];
                adj2[it.first].push_back(it.second);
                adj2[it.second].push_back(it.first);


            }
        }
        int tempcount=0;
        for(int k=1;k<=n;k++){
            if(!vis2[k]){
                tempcount++;
                dfs(k,adj2,vis2);
           }
        }
        if(tempcount>count){
            myans++;
        }
    }
    cout<<myans<<endl;





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