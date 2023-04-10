#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n,m;cin>>n>>m;
    int x1,x2,y1,y2;cin>>x1>>x2>>y1>>y2;
    int sum1=0;
    int drow[]={-1,0,1,0};
    int dcol[]={0,1,0,-1};

    for(int i=0;i<4;i++){
        int nrow=x1+drow[i];
        int ncol=x2+dcol[i];
        if(nrow>0 && nrow<=n &&  ncol>0 && ncol<=m ){
            sum1++;
        }
    }
    int sum2=0;
    for(int i=0;i<4;i++){
        int nrow=y1+drow[i];
        int ncol=y2+dcol[i];
        if(nrow>0 && nrow<=n &&  ncol>0 && ncol<=m ){
            sum2++;
        }

    }
    cout<<min(sum1,sum2)<<endl;return;



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