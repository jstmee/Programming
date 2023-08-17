#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    vector<int> myarr={3,4,5,4,3,6};
    map<int,int> mp;
    for(auto it:myarr){
        mp[it]++;
    }
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;;
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