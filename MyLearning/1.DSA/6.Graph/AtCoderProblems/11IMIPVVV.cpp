#include<bits/stdc++.h>
#define int long long
using namespace std;


/*


https://atcoder.jp/contests/abc226/tasks/abc226_c
*/

void myf(){

    int n;cin>>n;
    set<pair<int,int>> adj[n+1];

    for(int i=1;i<=n;i++){
        int t,val;
        cin>>t>>val;
        for(int j=1;j<=val;j++){
            int a;cin>>a;
            adj[a].insert({i,t});
        }
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