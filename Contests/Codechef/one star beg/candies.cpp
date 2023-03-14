#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    vector<int> v(2*n);
    map<int,int> mp;
    for(int i=0;i<2*n;i++){
        cin>>v[i];
        mp[v[i]]++;
        if(mp[v[i]]>=3){
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;


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