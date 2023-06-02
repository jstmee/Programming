/*

https://atcoder.jp/contests/abc235/tasks/abc235_d

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int a,n;cin>>a>>n;
    queue<pair<int,int>> q;
    q.push({0,1});
    map<int,bool> vis;
    vis[1]=true;
    while(!q.empty()){
        int node=q.front().second;
        int steps=q.front().first;
        q.pop();
        
        if(node==n){
            cout<<steps<<endl;return;
        }
        int temp1=node*a;
        if(temp1<1e6 && !vis[temp1] ){
            vis[temp1]=true;
            q.push({steps+1,temp1});

        }
        if(node>=10 && node%10!=0 ){
            string temp=to_string(node);
            int sz=temp.size();

            string tt=temp.substr(0,sz-1);
            string myt="";
            myt.push_back(temp[sz-1]);
            myt=myt+tt;
            int temp2=stoi(myt);
            
            if(temp2<1e6 && !vis[temp2]){
                vis[temp2]=true;
                q.push({steps+1,temp2});
            }
        }
    }
    cout<<-1<<endl;return;





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