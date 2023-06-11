#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int n;cin>>n;
    if(n%3==0){
        cout<<n/3<<" "<<n/3<<endl;return;
    }
    if((n-1)%3==0){
        int p=(n-1)/3;
        // if(p-1>=0){
        //     cout<<p-1<<" "<<p<<endl;return;

        // }
        cout<<p+1<<" "<<p<<endl;return;
        
    }
    if((n-2)%3==0){
        int p=(n-2)/3;
        cout<<p<<" "<<p+1<<endl;return;
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