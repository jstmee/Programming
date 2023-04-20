#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int n;cin>>n;
    int totalnum=2*n;
    vector<vector<int>> v(2,vector<int> (n,0));
    v[0][0]=totalnum;
    v[1][n-1]=totalnum-1;
    //19 2 12 4 14 6 16 8 18 10
    // 1 11 3 13 5 15 7 17 9 20
    //
    for(int i=1;i<n;i++){
        if(i%2!=0){
            v[0][i]=i+1;
            v[1][i-1]=i;
        }
        if(i%2==0){
            v[0][i]=n+i;

            v[1][i-1]=n+i-1;

        }

    }

    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
            // cout<<" ";

        }
        cout<<endl;
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