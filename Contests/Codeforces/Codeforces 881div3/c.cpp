#include<bits/stdc++.h>
#define int long long
using namespace std;

void dfs(int node,int parent,vector<int> adj[],vector<int> &noleaf){
    int c=0;
    for(auto it:adj[node]){
        if(parent!=it){
            c++;
            
            dfs(it,node,adj,noleaf);
            noleaf[node]+=noleaf[it];
        }
    }
    if(c==0){
        noleaf[node]++;
    }

}
void myf(){

    int n;cin>>n;
    vector<int> adj[n+1];
    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);


    }
    vector<int> noleaf(n+1,0);
    dfs(1,-1,adj,noleaf);
    int q;cin>>q;
    while(q--){
        int c,d;cin>>c>>d;
        cout<<noleaf[c]*noleaf[d]<<endl;
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