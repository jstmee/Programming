#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    vector<int> v1={23, 4,5 ,101};
    vector<int> v2={21,1,10, 100};

    vector<vector<int>> dp(104,vector<int> (2,0));
    dp[0][0]=v1[0];
    dp[0][1]=v2[0];

    // int ans=solve(0,v1,v2);

    for(int i=1;i<4;i++){
        dp[i][0]=max(v1[i]+dp[i-1][0],v1[i]+dp[i-2][1]);
        dp[i][1]=max(v2[i]+dp[i-1][1],v2[i]+dp[i-2][0]);

    }
    cout<<max(dp[3][0],dp[3][1])<<endl;
    cout<<5<<endl;
    // cout<<ans<<endl;


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