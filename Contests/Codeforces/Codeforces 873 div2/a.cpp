#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i]=i+1;
    }
    // if(n==2){
    //     cout<<"2"<<" "<<4<<endl;return;
    // }
    for(auto it:v){
        cout<<it*2<<" ";
    }
    cout<<endl;
    return;
    // 200*200


    



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