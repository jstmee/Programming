

#include<bits/stdc++.h>
#define int long long
using namespace std;


void dfs(int i,int j,vector<vector<int>> &matrix,int &ans,set<int> &s,int n,int m){
    if(i<0 ||j<0|| i>=n || j>=m ){
        return;
    }
    if(s.find(matrix[i][j])!=s.end()){
        return;
    }
    if(i==n-1 && j==m-1){
        ans++;
        return;
    }
    s.insert(matrix[i][j]);
    dfs(i+1,j,matrix,ans,s,n,m);
    dfs(i,j+1,matrix,ans,s,n,m);
}

void myf(){
    int n,m;cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    int ans=0;
    set<int> s;
    dfs(0,0,matrix,ans,s,n,m);
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