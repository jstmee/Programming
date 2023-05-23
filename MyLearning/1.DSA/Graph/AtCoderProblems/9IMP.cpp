
/*

https://atcoder.jp/contests/abc274/submissions/41485184

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
    queue<pair<int,int>> q;
    q.push({0,0});
    vis[0][0]=1;
    // map<int,int> mp;
    set<int> s;

    vector<vector<int> > ways(n,vector<int> (m,0));
    ways[0][0]=1;
    bool check=false;
    while(!q.empty()){

        int r=q.front().first;
        int c=q.front().second;
        q.pop();
        // mp[matrix[r][c]]++;
        s.insert(matrix[r][c]);
        // if(mp[matrix[r][c]]>=1){
        //     check=true;
        // }
        //case1 right
        int nrow=r;
        int ncol=c+1;
        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m ){
            int p=s.size();
            s.insert(matrix[nrow][ncol]);
            // mp[matrix[nrow][ncol]]++;
            if(s.size()-p==1){

                if(!vis[nrow][ncol]){
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                    ways[nrow][ncol]=ways[r][c];
                }
                else{
                    ways[nrow][ncol]+=ways[r][c];

                }


            }
            // mp[matrix[nrow][ncol]]--;
            s.erase(matrix[nrow][ncol]);


            
        }


        //case2 down

        nrow=r+1;
        ncol=c;

        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m ){
            
            // mp[matrix[nrow][ncol]]++;
            int p=s.size();
            s.insert(matrix[nrow][ncol]);
            if(s.size()-p==1){

                if(!vis[nrow][ncol]){
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                    ways[nrow][ncol]=ways[r][c];
                }
                else{
                    ways[nrow][ncol]+=ways[r][c];

                }
            }

            // mp[matrix[nrow][ncol]]--;
            s.erase(matrix[nrow][ncol]);

            
        }


    }
    // if(check){
    //     cout<<0<<endl;
    // }
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