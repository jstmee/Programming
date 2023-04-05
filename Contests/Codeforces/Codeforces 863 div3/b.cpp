#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int n;cin>>n;
    vector<int> v(n-1),ans(n);
    for(int i=0;i<n-1;i++){
        cin>>v[i];
    }

    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            ans.push_back(v[i]);
        }
        else{
            
        }

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