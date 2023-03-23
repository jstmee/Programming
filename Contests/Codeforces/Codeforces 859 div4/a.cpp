#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int a,b,c;cin>>a>>b>>c;
    if(a+b==c){
        cout<<"+"<<endl;
        return;
    }
    cout<<"-"<<endl;


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