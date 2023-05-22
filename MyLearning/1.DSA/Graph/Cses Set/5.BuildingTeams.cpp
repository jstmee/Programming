#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n, m;
    cin >> n >> m;

    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> color(n+1,-1);
    for(int i=1;i<=n;i++){
        if(color[i]==-1){
            queue<int> q;
            q.push(i);
            color[i] = 0;
            while (!q.empty())
            {
                int node = q.front();
                q.pop();
                for (auto it : adj[node])
                {
                    if (color[it] == -1)
                    {
                        color[it] = !color[node];
                        q.push(it);
                    }
                    else if (color[it] == color[node])
                    {
                        cout << "IMPOSSIBLE" << endl;
                        return;
                    }
                }
            }
        }
    }
    
    
    for(int i=1;i<=n;i++){
        cout<<color[i]+1<<" ";
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