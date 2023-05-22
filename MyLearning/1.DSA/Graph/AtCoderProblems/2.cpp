
/*
LINK==

https://atcoder.jp/contests/abc264/tasks/abc264_d
*/

#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    string s;cin>>s;

    queue<string> q;
    q.push(s);
    map<string,int> mp;
    mp[s]=0;

    while(!q.empty()){
        string mys=q.front();
        q.pop();
        if(mys=="atcoder"){

            cout<<mp[mys]<<endl;
            return;

        }
        for(int i=0;i<mys.size()-1;i++){
            string ss=mys;
            swap(ss[i],ss[i+1]);
            if(mp.find(ss)==mp.end()){
                mp[ss]=1+mp[mys];
                q.push(ss);
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