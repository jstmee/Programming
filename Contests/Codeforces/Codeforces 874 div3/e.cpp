#include<bits/stdc++.h>
#define int long long
using namespace std;

bool bfs(int sr,set<int> adj[],vector<int> &vis){
        
        queue<pair<int,int>>q;
        q.push({sr,-1});
        vis[sr]=1;
        while(!q.empty()){
            int node=q.front().first;
            int parent=q.front().second;
            
            q.pop();
            for(auto p:adj[node]){
                if(!vis[p]){
                    vis[p]=1;
                    q.push({p,node});
                    
                }
                else if(parent!=p){
                    return true;
                }
            }
        }
        
        return false;
}

void myf(){

    int n;cin>>n;
    set<int> adj[n+1];
    for(int i=1;i<=n;i++){
        int a;cin>>a;
        adj[i].insert(a);
        adj[a].insert(i);
    }
    vector<int> vis(n+1,0);
    
    int open=0,closed=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            
            if(bfs(i,adj,vis)==true){
                closed++;
                
                
            }
            else open++;
            
        }
    }
    // cout<<open<<" "<<closed<<endl;

    if(open>0){
        cout<<closed+1<<" "<<closed+open<<endl;
        return;
    }
    cout<<closed<<" "<<closed<<endl;


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