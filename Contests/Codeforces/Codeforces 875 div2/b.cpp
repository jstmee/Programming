#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int n;cin>>n;
    vector<int> adj[n+1];
    map<pair<int,int>,int> mymp;
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        mymp[{u,v}]=i;
        mymp[{v,u}]=i;

    }

    vector<int> dp(n+1,0);

    queue<pair<int,int>> q;
    q.push({1,0});
    vector<int> vis(n+1,0);
    vis[1]=1;
    
    while(!q.empty()){
        int node=q.front().first;
        int ind=q.front().second;
        q.pop();
        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it]=1;
                
                if(ind>mymp[{node,it}]){
                    dp[it]=dp[node]+1;
                }
                else {
                    dp[it]=dp[node];
                }
                q.push({it,mymp[{node,it}]});
            }
        }
    }
    int ans=0;
    dp[1]=0;
    for(int i=1;i<=n;i++){
        ans=max(dp[i],ans);

    }

    cout<<ans+1<<endl;return;



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