
/*

#submitted
https://atcoder.jp/contests/abc211/tasks/abc211_d

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
    int mod=1e9+7;
    vector<int> dis(n+1,1e9);
    vector<int> count(n+1,0);
    queue<int> q;
    q.push(1);
    dis[1]=0;
    count[1]=1;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto it:adj[node]){

            if(1+dis[node]<dis[it]){
                dis[it]=1+dis[node];
                q.push(it);
                count[it]=count[node]%mod;
            }
            else if(1+dis[node]==dis[it]){
                count[it]=(count[it]%mod+count[node]%mod)%mod;
                count[it]=count[it]%mod;
            }
        }
    }
    cout<<count[n]%mod<<endl;


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