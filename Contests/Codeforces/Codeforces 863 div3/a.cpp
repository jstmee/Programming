#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int n,d;cin>>n>>d;
    string p=to_string(d);
    string s;cin>>s;
    string ans="";
    int check=-1;
    
    for(int i=0;i<n;i++){
        if(s[i]<p[0]){
            check=i;
            break;
        }
    }
    if(check==-1){
        cout<<s<<p<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(check==i){
            cout<<p[0];
        }
        cout<<s[i];
    }


    cout<<endl;return;


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