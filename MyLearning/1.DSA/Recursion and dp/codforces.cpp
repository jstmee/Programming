#include<bits/stdc++.h>
#define int long long
using namespace std;

int solve(int i,int n,int target,vector<int> &v){
    if(target<0){
        return INT_MAX;
    }
    if(target==0){
        return 0;
    }
    if(i>=n){
        if(target==0){
            return 0;
        }
        return INT_MAX;
    }
    //take it
    int ans1=INT_MAX;
    ans1=1+solve(i,n,target-v[i],v);

    int ans2=INT_MAX;
    ans2=solve(i+1,n,target,v);

    return min(ans1,ans2);
    // return 0;
}
void myf(){
    int n;cin>>n;
    vector<int> v={1,5,10,20,100};
    int target=n;
    cout<<solve(0,5,target,v)<<endl;


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