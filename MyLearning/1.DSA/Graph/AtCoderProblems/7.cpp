/*


https://atcoder.jp/contests/abc228/tasks/abc228_b
*/


#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int n,x;cin>>n>>x;
    vector<int> adj[n+1];

    for(int i=1;i<=n;i++){

        int a;cin>>a;


        adj[i].push_back(a);



    }

    vector<int> vis(n+1,0);
    vis[x]=1;
    queue<int> q;
    q.push(x);
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

    int ans=0;
    for(int i=1;i<=n;i++){
        if(vis[i]) ans++;
    }
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