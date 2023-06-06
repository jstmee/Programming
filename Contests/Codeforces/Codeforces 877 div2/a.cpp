#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;

    vector<int> v(n);
    // map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(v[0]<0){
        cout<<v[0]<<endl;return;
    }
    cout<<v[n-1]<<endl;
    



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