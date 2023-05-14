#include<bits/stdc++.h>
#define int long long
using namespace std;

// int minsumf(int i,vector<int> &v,int n,int k){
//     if(i+1>=n){
//         return v[i];
//     }
//     if(k==0){
//         return 0;
//     }
//     //case1 if we take first two ell
//     int tempsum=v[i]+v[i+1]+minsumf(i+2,v,n,k-1);
//     //case2if we take last el only
//     int tempsum2=v[n-1]+minsumf(i,v,n-1,k-1);
//     return min(tempsum,tempsum2);

// }
void myf(){
    int n,k;cin>>n>>k;
    vector<int> v(n);
    // int sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        // sum+=v[i];
    }
    sort(v.begin(),v.end(),greater<int>());
    vector<int> prefix(n+1,0);
    prefix[0]=0;
    prefix[1]=v[0];
    for(int i=2;i<=n;i++){
        prefix[i]=prefix[i-1]+v[i-1];
    }

    //10 11 12 13 15 22
    //0  10 21 33 46 61 83
    int l=-1;
    int r=n-2*k;//r=6-4=2
    int ans=INT_MIN;
    while(l<k && r<n+1){

        ans=max(ans,prefix[r]-prefix[l+1]);
        l++;
        r=r+2;

    }
    cout<<ans<<endl;
    
    
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