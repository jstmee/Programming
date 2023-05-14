#include<bits/stdc++.h>
#define int long long
using namespace std;


void dfs(int node,vector<int> &vis,vector<int> adj[],
vector<int> &ans){
    vis[node]=1;
    ans.push_back(node);
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,vis,adj,ans);
        }
    }


}
void myf(){
    int n;cin>>n;
    int villages=n+1;
    vector<int> adj[villages];
    for(int i=0;i<n-1;i++){
        adj[i].push_back(i+1);
    }
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==0){
            adj[i].push_back(n);
        }
        else{
            adj[n].push_back(i);
        }
    }
    
    
    
    for(int i=0;i<=n;i++){
        vector<int > ans;
        vector<int> vis(villages+1,0);
        vector <int> path(villages+1,0);
        dfs(i,vis,adj,ans);
        if(ans.size()==villages ){
            for(auto it:ans){
                cout<<it+1<<" ";
            }
            cout<<endl;
            return;
        }

        
    }
    cout<< -1<<endl;return;

    





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