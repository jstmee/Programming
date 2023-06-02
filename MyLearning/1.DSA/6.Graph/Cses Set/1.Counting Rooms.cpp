#include<bits/stdc++.h>
#define int long long
using namespace std;
 
 
 
void myf(){
    int n,m;cin>>n>>m;
    vector<vector<char>> matrix(n,vector<char> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
 
    vector<vector<int>> vis(n,vector<int> (m,0));
    int dr[]={-1,0,1,0};
    int dc[]={0,1,0,-1};
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]=='.' && !vis[i][j]){
                ans++;
                queue<pair<int,int>> q;
                q.push({i,j});
                vis[i][j]=1;
                while(!q.empty()){
                    int r=q.front().first;
                    int c=q.front().second;
                    q.pop();
                    for(int k=0;k<4;k++){
                        int nrow=r+dr[k];
                        int ncol=c+dc[k];
                        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && matrix[nrow][ncol]=='.' && !vis[nrow][ncol]){
                            vis[nrow][ncol]=1;
                            q.push({nrow,ncol});
 
                        }
 
                    }
                }
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
    
    while(t--){
        myf();
    }
    return 0;
}
