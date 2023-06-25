#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int n;cin>>n;
    vector<int> g[n+1];
    vector<pair<int,int>> v;
    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        v.push_back({a,b});

        if(a>b){
            g[b].push_back(a);

        }
        else{
            g[a].push_back(b);
        }
    }

    vector<int> dis(n+1,0);
    vector<int> vis(n+1,0);
    queue<int> q;
    q.push(1);
    vis[1]=1;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        // int check=0;
        for(auto it:g[node]){
            // check++;
            // q.push(it);
            // vis[it]=1;
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
        if(g[node].size()==0){
            dis[node]=1;
        }

    }

    

    vector<int> adj[n+1];
    for(auto it:v){
        int a=it.first;
        int b=it.second;
        if(a>b){
            adj[a].push_back(b);
        }
        else{

            adj[b].push_back(a);

        }
    }
    vector<int> vis1(n+1,0);
    queue<pair<int,int>> qq;
    for(int i=1;i<=n;i++){
        if(dis[i]==1){
            qq.push({i,1});
            vis1[i]=1;
        }
    }
    while(!qq.empty()){
        int node=qq.front().first;
        int sec=qq.front().second;
        qq.pop();
        for(auto it:adj[node]){
            dis[it]+=sec;
            qq.push({it,sec});
            
           

        }
    }

    int queries;cin>>queries;
    while(queries--){
        int p,q;cin>>p>>q;
        cout<<dis[p]*dis[q]<<endl;
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