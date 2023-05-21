#include<bits/stdc++.h>
#define int long long
using namespace std;
void myf(){
    int n,m;cin>>n>>m;
    vector<vector<char>> matrix(n,vector<char> (m));
    queue<pair<int,int>> q;
    vector<vector<int>> vis(n,vector<int> (m,0));
    pair<int,int> end,start;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
            if(matrix[i][j]=='A'){
                q.push({i,j});
                vis[i][j]=1;
                start={i,j};
            }
            if(matrix[i][j]=='B'){
                end={i,j};
            }
        }
    }
    map<pair<int,int>,pair<pair<int,int>,char>> parent;
    int dr[]={-1,0,1,0};
    int dc[]={0,1,0,-1};
    vector<char> allmoves={'U','R','D','L'};
    bool check=false;
    while(!q.empty()){
        int r=q.front().first;
        int c=q.front().second;
        if(end==make_pair(r,c)){
            check=true;
            break;
        }
        q.pop();
        for(int i=0;i<4;i++){
            int nrow=r+dr[i];
            int ncol=c+dc[i];
            
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && (matrix[nrow][ncol]=='.'|| matrix[nrow][ncol]=='B') && !vis[nrow][ncol]){
                vis[nrow][ncol]=1;
                q.push({nrow,ncol});
                parent[{nrow,ncol}]={{r,c},allmoves[i]};
            }
        }
    }
    if(check){
        cout<<"YES"<<endl;
        string ans="";
        while(true){
            auto it=parent[{end.first,end.second}];
            ans.push_back(it.second);
            int p=it.first.first;
            int q=it.first.second;
            end={p,q};
            if(p==start.first && q==start.second){
                break;
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans.size()<<endl;
        cout<<ans<<endl;
        
    }
    else {
        cout<<"NO"<<endl;
    }
    
    
    

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