#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n,m,k;cin>>n>>m>>k;
    vector<int> v1(k),v2(k);
    for(int i=0;i<k;i++){
        cin>>v1[i];
    }
    for(int j=0;j<k;j++){
        cin>>v2[j];
    }

    vector<int> vis(n+1,0);
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> temp(n+1,0);

    for(int i=0;i<k;i++){
        vis[v1[i]]=1;
        temp[v1[i]]=max(temp[v1[i]],v2[i]);

    }

    priority_queue<pair<int,int> ,vector<pair<int,int>>> pq;

    for(int i=1;i<=n;i++){

        pq.push({temp[i],i});

    }

    while(!pq.empty()){
        auto it=pq.top();
        pq.pop();
        int maxdis=it.first;
        int node=it.second;
        if(maxdis<temp[node]) continue;
        if(maxdis<=1){
            continue;
        }

        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it]=1;
            }

            if(temp[it]<temp[node]-1){
                temp[it]=temp[node]-1;
                pq.push({temp[it],it});
            }
        }

    }

    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            cout<<"NO"<<endl;return;
        }
    }
    cout<<"YES"<<endl;







    





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