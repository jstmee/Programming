
/*
https://atcoder.jp/contests/abc293/tasks/abc293_c
*/


#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n,m;cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    vector<vector<int>> vis(n,vector<int>(m,0));
    set<int> s;
    queue<pair<pair<int,int>,set<int>>> q;
    vector<vector<int> > ways(n,vector<int> (m,0));
    bool check=false;
    int dr[]={0,1};
    int dc[]={1,0};
    s.insert(matrix[0][0]);
    ways[0][0]=1;
    vis[0][0]=1;
    q.push({{0,0},s});
    while(!q.empty()){

        int r=q.front().first.first;
        int c=q.front().first.second;
        auto myset=q.front().second;
        q.pop();
        for(int i=0;i<2;i++){
            int nrow=r+dr[i];
            int ncol=c+dc[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m ){
                int val=matrix[nrow][ncol];
                set<int> currnow=myset;
                if(currnow.count(val)){
                    continue;
                }
                currnow.insert(val);
                if(!vis[nrow][ncol]){
                    vis[nrow][ncol]=1;
                    ways[nrow][ncol]=ways[r][c];
                    q.push({{nrow,ncol},currnow});
                }
                else if(vis[nrow][ncol]){
                    ways[nrow][ncol]+=ways[r][c];
                }

            }

        }
    }
    cout<<ways[n-1][m-1]<<endl;


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