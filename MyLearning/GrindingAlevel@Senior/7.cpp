#include<bits/stdc++.h>
#define int long long
using namespace std;

/*

https://atcoder.jp/contests/abc292/tasks/abc292_b

*/
void myf(){
    int n,q;cin>>n>>q;
    vector<int > yellow(n+1,0);
    vector<int> red(n+1,0);
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        if(a==1){
            yellow[b]++;
        }
        else if(a==2){
            red[b]++;
        }
        else if(a==3){
            if(yellow[b]>=2 || red[b]>=1){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
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