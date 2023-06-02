#include<bits/stdc++.h>
#define int long long
using namespace std;

/*


https://atcoder.jp/contests/abc294/tasks/abc294_b


*/
void myf(){

    int n,m;cin>>n>>m;
    // char p=69;
    // cout<<p;

    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            int p;cin>>p;
            if(p==0){
                cout<<".";
            }
            else{
                char c=64+p;
                cout<<c;
            }
        }
        cout<<endl;
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