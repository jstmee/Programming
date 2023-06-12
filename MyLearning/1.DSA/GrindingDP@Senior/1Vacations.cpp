#include<bits/stdc++.h>
#define int long long
using namespace std;

/*
https://codeforces.com/problemset/problem/698/A
*/
int myans(int i,vector<int> &v,int prev,int n){

    if(i>=n){
        return 0;
    }
    int ans=INT_MAX;
    if(v[i]==0){
        ans=min(ans,1+myans(i+1,v,0,n));
    }

    else if(v[i]==1){

        if(prev==1){
            ans=min(ans,1+myans(i+1,v,0,n));
        }
        else {
            int ans1=1+myans(i+1,v,0,n);
            int ans2=myans(i+1,v,1,n);
            ans=min(ans,min(ans1,ans2));
        }
    }
    else if(v[i]==2){
        if(prev==2){
            ans=min(ans,1+myans(i+1,v,0,n));
        }
        else{
            int ans1=myans(i+1,v,2,n);
            int ans2=1+myans(i+1,v,0,n);
            ans=min(ans,min(ans1,ans2));
        }
    }
    else{
        if(prev==0){
            int ans1=1+myans(i+1,v,0,n);
            int ans2=myans(i+1,v,1,n);
            int ans3=myans(i+1,v,2,n);

            int temp=min(ans1,min(ans2,ans3));
            ans=min(ans,temp);
        }
    }
    return ans;
}

void myf(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(v[0]==0){
        cout<<myans(1,v,0,n)<<endl;
        return;
    }
    else if(v[0]==1){
        int ans1=1+myans(1,v,0,n);
        int ans2=myans(1,v,1,n);
        cout<<min(ans1,ans2)<<endl;
        return;
    }
    else if(v[0]==2){
        int ans1=1+myans(1,v,0,n);
        int ans2=myans(1,v,2,n);
        cout<<min(ans1,ans2)<<endl;return;
    }
    else{
        int ans1=1+myans(1,v,0,n);
        int ans2=myans(1,v,1,n);
        int ans3=myans(1,v,2,n);
        cout<<min(ans1,min(ans2,ans3))<<endl;return;
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