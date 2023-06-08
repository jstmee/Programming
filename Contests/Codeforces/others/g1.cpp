#include <bits/stdc++.h>
#define int long long
using namespace std;

void myf(){
    int n,m,k;cin>>n>>m>>k;
    vector<int> v1(n),v2(n);
    for(int i=0;i<k;i++){
        cin>>v1[i];
    }
    pair<int,int> myp={0,INT_MIN};
    for(int i=0;i<k;i++){
        cin>>v2[i];
        if(myp.second<v2[i]){
            myp.second=v2[i];
            myp.first=v1[i];
        }
    }
    
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int> dis(n+1,-1);
    queue<int> q;
    q.push(myp.first);
    dis[myp.first]=1;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto it:adj[node]){
            if(dis[it]==-1){
                dis[it]=dis[node]+1;
            }
        }
    }
    int maxdis=INT_MIN;
    for(int i=1;i<=n;i++){
        maxdis=max(maxdis,dis[i]);
    }
    if(maxdis<=myp.second){
        cout<<"YES"<<endl;return;
    }
    
    cout<<"NO"<<endl;return;
    
}
int32_t main() {
	// your code goes here
    #ifndef ONLINE_JUDGE
           freopen("D:\\Programming\\C++ Programming\\input.txt","r",stdin);
           freopen("D:\\Programming\\C++ Programming\\output.txt","w",stdout);
    #endif
	int t;cin>>t;
	while(t--){
	    myf();
	}
	return 0;
}
