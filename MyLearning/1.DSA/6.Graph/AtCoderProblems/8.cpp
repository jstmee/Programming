

/*
#submittted
https://atcoder.jp/contests/abc265/tasks/abc265_c
*/


#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int h,w;
    cin>>h>>w;
    vector<vector<char> > matrix(h,vector<char> (w));
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){

            cin>>matrix[i][j];

        }
    }
    vector<vector<int> > vis(h,vector<int> (w,0));
    int dr[]={-1,0,1,0};
    int dc[]={0,1,0,-1};
    int mov[]={'U','R','D','L'};
    queue<pair<int,int>> q;
    q.push({0,0});

    vis[0][0]=1;

    while(!q.empty()){

        int r=q.front().first;
        int c=q.front().second;
        q.pop();

        char cc=matrix[r][c];
        int nrow=-1,ncol=-1;
        bool check=false;
        for(int i=0;i<4;i++){
            if(cc=='U' && cc==mov[i] && r!=1-1){
                nrow=r+dr[i];
                ncol=c+dc[i];
                check=check||true;


            }
            if(cc=='D' && cc==mov[i] && r!=h-1){
                nrow=r+dr[i];
                ncol=c+dc[i];
                check=check||true;

            }
            if(cc=='L' && cc==mov[i] && c!=1-1){
                nrow=r+dr[i];
                ncol=c+dc[i];
                check=check||true;


            }
            if(cc=='R' && cc==mov[i] && c!=w-1){
                nrow=r+dr[i];
                ncol=c+dc[i];
                check=check||true;

            }
        }

        if(nrow<0 || nrow>h || ncol<0 || ncol>w){
            cout<<r+1<<" "<<c+1<<endl;return;
        }
        else if(!vis[nrow][ncol]){
            vis[nrow][ncol]=1; 
            q.push({nrow,ncol});
        }


        

    
    }

    cout<<-1<<endl;return;







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