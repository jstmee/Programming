#include<bits/stdc++.h>
#define int long long
using namespace std;

bool f(int i,int n,int target,vector<int> &v,vector<int> ans,vector<int> &temp){
    if(target<0){
        return false;
    }
    if(target==0){
        temp=ans;
        return true;
    }

    if(target!=0 && i==n){
        return false;
    }
    if(i==n){
        if(target==0){
            temp=ans;
            return true;
        }
        else{
            return false;
        }
    }
    // if(dp[i][target]!=-1){
    //     return dp[i][target];
    // }
    ans.push_back(v[i]);
    bool take=f(i,n,target-v[i],v,ans,temp);
    ans.pop_back();
    bool nottake=f(i+1,n,target,v,ans,temp);
    return (take||nottake);

}

void myf(){
    int n,k,x;
    cin>>n>>k>>x;
    vector<int> v;
    for(int i=1;i<=k;i++){
        if(i!=x){
            v.push_back(i);
        }
    }
    int sz=v.size();
    vector<int> ans;
    // vector<vector<int>> dp(sz+1,vector<int> (n+1,-1));
    bool check=f(0,sz,n,v,{},ans);
    if(check){
        cout<<"YES"<<endl;
        cout<<ans.size()<<endl;
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
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