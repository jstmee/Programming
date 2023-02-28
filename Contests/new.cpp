#include<bits/stdc++.h>
#define int long long
using namespace std;

void myf(){
    string a,b;
    cin>>a>>b;
    int n=a.size();
    int m=b.size();
    if(a[0]==b[0]){
        cout<<"YES"<<endl;
        cout<<a[0]<<"*"<<endl;
        return;

    }
    if(a[n-1]==b[m-1]){
        cout<<"YES"<<endl;
        cout<<"*"<<b[m-1]<<endl;
        return;
    }
    bool z=0;
    string ans;
    for(int i=0;i<n-1;i++){
        string p="";
        p.push_back(a[i]);
        p.push_back(a[i+1]);
        if(b.find(p)!=std::string::npos){
            ans=p;
            z=1;
            break;


        }
        
    }
    if(z){
        cout<<"YES"<<endl;
        cout<<"*"<<ans<<"*"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
        return;
    }



}
int32_t main(){
    #ifndef ONLINE_JUDGE
           freopen("input.txt","r",stdin);
           freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        myf();
    }
    return 0;
}