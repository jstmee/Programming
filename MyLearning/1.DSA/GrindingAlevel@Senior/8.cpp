#include<bits/stdc++.h>
#define int long long
using namespace std;

/*


https://atcoder.jp/contests/abc287/tasks/abc287_a

*/
void myf(){

    int n;cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="For"){
            mp[0]++;
        }
        else{
            mp[1]++;
        }
    }
    if(mp[0]>mp[1]){
        cout<<"Yes"<<endl;return;
    }
    cout<<"No"<<endl;


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