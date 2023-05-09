#include<bits/stdc++.h>
#define int long long
using namespace std;

void bfs(int node,vector<int> &vis,
vector<int> adj[],vector<int> &ans){

    queue<int> q;
    q.push(node);
    vis[node]=1;
    while(!q.empty()){
        int nnode=q.front();
        ans.push_back(nnode);
        q.pop();
        for(auto it:adj[nnode]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    }
}
void myf(){
    int nofv;cin>>nofv;
    vector<int> v(nofv);
    for(int i=0;i<nofv;i++){
        cin>>v[i];
    }

    vector<int> adj[nofv+2];
    for(int i=1;i<=nofv-1;i++){
        adj[i].push_back(i+1);

    }
    for(int i=0;i<nofv;i++){
        if(v[i]==0){
            adj[i+1].push_back(nofv+1);

        }
        else{
            adj[nofv+1].push_back(i+1);
        }
    }
    
    vector<int> ans;
    for(int i=1;i<=nofv+1;i++){
        vector<int> vis(nofv+2,0);
        if(!vis[i]){
            int check=0;
            bfs(i,vis,adj,ans);  
            for(int i=1;i<=nofv+1;i++){
                if(vis[i]!=0){
                    check=1;
                }
            }
            if(check){
                continue;
            } 
            else {
                for(auto it:ans){
                    cout<<it<<" ";
                }
                cout<<endl;
                return;
            }     
        }

        cout<<-1<<endl;



    }
    
    



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