#include<bits/stdc++.h>
#define int long long
using namespace std;

/*
https://cses.fi/problemset/task/1674
ACCECPTED
*/

void dfs(int node,int parent,vector<int> &leaf,vector<int> adj[]){

    for(auto it:adj[node]){
        if(parent!=it){
            dfs(it,node,leaf,adj);
            leaf[node]+=leaf[it];
        }
    }
    leaf[node]++;
}
void myf(){

    int n;cin>>n;
    vector<int > adj[n+1];
    for(int i=2;i<=n;i++){
        int a;cin>>a;
        adj[a].push_back(i);
        adj[i].push_back(a);

    }

    vector<int> leaf(n+1,0);
    dfs(1,-1,leaf,adj);

    for(int i=1;i<=n;i++){
        cout<<leaf[i]-1<<" ";
    }
    cout<<endl;


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