#include<bits/stdc++.h>
#define int long long
using namespace std;


//recursion method top down
int f(int n,vector<int> &dp){

    if(n<=1) return n;

    if(dp[n]!=-1){
        return dp[n];
    }



    return dp[n]= f(n-1,dp)+f(n-2,dp);
}

//funciton for bottom up method 2
void method2(int n,vector<int> &dp){

    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }

    cout<<dp[n]<<endl;

    //tc-0(n)
    //sc-0(n)


}

// most optimized sol;

int method3(int n){

    int prev2=0;
    int prev1=1;
    if(n==0){
        return prev2;
        
    }
    if(n==1){
        return prev1;
    }

    for(int i=2;i<=n;i++){
        // int curr=prev2+prev1;
        // prev2=prev1;
        // prev1=curr;
        int curr=prev2+prev1;
        prev2=prev1;
        prev1=curr;
    }
    return prev1;

}
void myf(){
    int n;cin>>n;
    vector<int> dp(n+2,-1);
    // cout<<f(n,dp);//using recurion method and top down memoization

    //method 2 bottom up
    // method2(n,dp);
    cout<<method3(n);


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