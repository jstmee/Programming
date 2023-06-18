#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int n;cin>>n;
    vector<int> q(n);
    for(int i=0;i<n;i++){
        cin>>q[i];
    }
    string s="1";
    bool check=true;
    for(int i=1;i<n;i++){
        if(q[i]>=q[i-1] && check){
            s.push_back('1');
        }
        else{
            check=false;
            if(i==1){
                s.push_back('1');
                continue;
            }
            if(q[0]>=q[i] && q[i-1]<=q[i]){
                s.push_back('1');
            }
            else{
                s.push_back('0');
            }
        }
    }
    cout<<s<<endl;return;




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