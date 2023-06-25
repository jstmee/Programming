#include<bits/stdc++.h>
#define int long long
using namespace std;
/*

https://codeforces.com/problemset/problem/115/A

accepted

*/

void myf(){

    int n;cin>>n;
    vector<int> adj[n+1];
    queue<pair<int, int>> q;
    vector<int> vis(n + 1, 0);
    for(int i=0;i<n;i++){
        int a;cin>>a;
        if(a!=-1){
            adj[i+1].push_back(a);
            adj[a].push_back(i+1);
        }
        if(a==-1){
            q.push({i+1,1});
            vis[i+1]=1;
            
            

        }

    }
    // int finalans=0;
    
    int ans = 0;
    
    // q.push({nod, 1});

    
    while (!q.empty())
    {
        int node = q.front().first;
        int depth = q.front().second;
        ans = max(ans, depth);
        q.pop();
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push({it, depth + 1});
            }
        }
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