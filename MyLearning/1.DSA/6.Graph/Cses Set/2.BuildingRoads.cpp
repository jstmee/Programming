#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int n,m;cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int a;cin>>a;
        int b;cin>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int> vis(n+1,0);
    vector<int> li;
    int ans=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            ans++;
            li.push_back(i);
            queue<int> q;
            q.push(i);
            vis[i]=1;
            while(!q.empty()){
                int node=q.front();
                q.pop();
                for(auto it:adj[node]){
                    if(!vis[it]){
                        vis[it]=1;
                        q.push(it);
                    }
                }
            }



        }
    }
    cout<<ans-1<<endl;
    for(int i=0;i<li.size()-1;i++){
        cout<<li[i]<<" "<<li[i+1]<<endl;
        
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