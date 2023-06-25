#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end(),greater<int>());
    int p=n/2;
    vector<int> temp1,temp2;
    for(int i=0;i<p;i++){
        temp1.push_back(v[i]);
        temp2.push_back(v[n-i-1]);
    }
    int ans=0;
    for(int i=0;i<p;i++){
        ans+=(temp1[i]-temp2[i]);

    }

    cout<<ans<<endl;return;




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