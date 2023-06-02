#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

        int n,m;cin>>n>>m;

        vector<int> adj[n+1];
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        int src=1;
        vector<int> dis(n+1,1e9);
        dis[src]=1;
        queue<int> q;
        q.push(src);
        map<int,int> parent;
        
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:adj[node]){
                if(dis[node]+1<dis[it]){
                    dis[it]=dis[node]+1;
                    q.push(it);
                    parent[it]=node;
                }
            }
        }
        
        for(int i=0;i<=n;i++){
            if(dis[i]==1e9){
                dis[i]=-1;
            }
        }
        if(dis[n]==-1){
            cout<<"IMPOSSIBLE"<<endl;
            return;
        }


        
        cout<<dis[n]<<endl;
        // cout<<n<<endl;
        // cout<<parent[n]<<" ";
        // cout<<parent[parent[n]]<<" ";

        // int i=n;
        // cout<<i<<" ";
        int i=n;
        vector<int> ans;
        while(true){
            // cout<<i<<" ";
            ans.push_back(i);
            if(i==1){
                break;
            }
            
            i=parent[i];
            
        }
        reverse(ans.begin(),ans.end());
        for(auto it:ans){
            cout<<it<<" ";
        }
        
        cout<<endl;


}



int32_t main(){
    #ifndef ONLINE_JUDGE
           freopen("D:\\Programming\\C++ Programming\\input.txt","r",stdin);
           freopen("D:\\Programming\\C++ Programming\\output.txt","w",stdout);
    #endif
    int t=1;
    
    while(t--){
        myf();
    }
    return 0;
}