#include<bits/stdc++.h>
#define int long long
using namespace std;

int f(int i,vector<int> &v,map<int,vector<int>> &mp,vector<int> &dp,map<int,int> &check){
    //max elements can be deleted fronm i to n
    if(i==v.size()){
        return 0;
    }
    if(dp[i]!=-1){
        
        return dp[i];
    }
    // //chose not to 
    int temp1=f(i+1,v,mp,dp,check);
    int val=v[i];
    int temp2=INT_MIN;
    if(mp.find(val)!=mp.end()){
        temp2=max(temp2,check[val]-i);
    }
    check[v[i]]=max(check[v[i]],i+1+f(i+1,v,mp,dp,check));
    return dp[i]=max(temp1,temp2);

}
void myf(){

    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> dp(n+1,-1);
    map<int,vector<int>> mp;
    for(int i=0;i<n;i++){
        mp[v[i]].push_back(i);
    }
    map<int,int> mpp;
    cout<<f(0,v,mp,dp,mpp)<<endl;


    




}



int32_t main(){
    #ifndef ONLINE_JUDGE
           freopen("D:\\Programming\\C++ Programming\\input.txt","r",stdin);
           freopen("D:\\Programming\\C++ Programming\\output.txt","w",stdout);
    #endif
    int t=1;
    cin>>t;
    
    while(t--){
        myf();
    }
    return 0;
}