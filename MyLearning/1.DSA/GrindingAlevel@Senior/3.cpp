#include<bits/stdc++.h>
#define int long long
using namespace std;

/*

https://atcoder.jp/contests/abc296/tasks/abc296_a

*/
void myf(){

    int n;cin>>n;
    string s;cin>>s;
    // int check=-1;
    char temp=s[0];
    for(int i=1;i<n;i++){
        if(temp==s[i]){
            cout<<"No"<<endl;return;
        }
        temp=s[i];
    }
    cout<<"Yes"<<endl;return;


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