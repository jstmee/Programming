/*
https://atcoder.jp/contests/abc168/tasks/abc168_d
*/


#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n,m;cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> dis(n+1,1e9);
    queue<int> q;
    q.push(1);
    dis[1]=0;
    vector<int> vis(n+1,0);
    vector<int> myans(n+1,-1);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto it:adj[node]){
            // if(!vis[it] && myans[it]==-1){
            //     myans[it]=node;
            //     q.push(it);
            // }
            if(1+dis[node] <dis[it]){
                dis[it]=1+dis[node];
                q.push(it);
                myans[it]=node;
            }
            
        }
    }
    
    cout<<"Yes"<<endl;

    for(int i=2;i<=n;i++){
        cout<<myans[i]<<endl;
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