#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int a,b;cin>>a>>b;

    if(a==1){
        if(b!=2){
            cout<<2*((a==1)?a:b)<<endl;

        }
        else{
            cout<<b+1<<endl;

        }
        
    }
    else{
        cout<<min(a,b)-1<<endl;
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