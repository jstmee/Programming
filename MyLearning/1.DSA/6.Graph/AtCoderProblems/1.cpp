#include<bits/stdc++.h>
#define int long long
using namespace std;

/*
submitted
https://atcoder.jp/contests/abc274/tasks/abc274_c

*/

void myf(){

    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> dp(2*n+2,0);
    for(int i=0;i<n;i++){

        dp[2*i+2]=dp[v[i]]+1;
        dp[2*i+3]=dp[v[i]]+1;
        
    }

    for(int i=1;i<=2*n+1;i++){
        cout<<dp[i]<<endl;
    }



    


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