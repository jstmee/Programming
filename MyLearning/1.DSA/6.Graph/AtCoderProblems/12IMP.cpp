#include<bits/stdc++.h>
#define int long long
using namespace std;



/*
accepted
https://atcoder.jp/contests/abc233/tasks/abc233_c
*/
void dfs(int i,int prod,int &ans,vector<int> adj[],int x,int n){

    if(i==n+1){
        if(prod==x){
            ans++;
            
        }
        return;

    } 
    for(auto it:adj[i]){

        if(prod>x/it) continue;
        dfs(i+1,prod*it,ans,adj,x,n);


    }

}
void myf(){

    int n,x;cin>>n>>x;
    vector<int> adj[n+1];
    for(int i=1;i<=n;i++){
        int a;cin>>a;
        for(int j=1;j<=a;j++){
            int pp;cin>>pp;
            adj[i].push_back(pp);
        }
    }
    int ans=0;
    dfs(1,1,ans,adj,x,n);
    cout<<ans<<endl;


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