#include<bits/stdc++.h>
#define int long long
using namespace std;

/*

https://atcoder.jp/contests/abc294/tasks/abc294_a
*/

void myf(){

    int n;cin>>n;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        if(a%2==0){
            cout<<a<<" ";
        }

    }
    cout<<endl;return;


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