#include<bits/stdc++.h>
#define int long long
using namespace std;


/*
https://atcoder.jp/contests/abc292/tasks/abc292_a

*/

void myf(){

    string s;cin>>s;
    int a=97-65;
    for(int i=0;i<s.size();i++){
        char p=s[i]-a;
        cout<<p;
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