#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    string s;cin>>s;
    if(s[0]=='0'){
        cout<<"0"<<endl;
        return;
    }
    if(s.size()==1){
        if(s[0]=='0'){
            cout<<0<<endl;
            return;
        }
        else if(s[0]!='0' && s[0]!='?'){
            cout<<1<<endl;
            return;
        }
    }
    int count=0;
    int ans=1;
    bool check=false;
    if(s[0]=='?'){
        check=true;
        ans=ans*9;
        
    }
    for(int i=1;i<s.size();i++){
        if(s[i]=='?'){
            count++;
        }


    }
    for(int i=1;i<=count;i++){
        ans=ans*10;
    }
    cout<<ans<<endl;
    


}



int32_t main(){
    #ifndef ONLINE_JUDGE
           freopen("D:\\Programming\\C++ Programming\\input.txt","r",stdin);
           freopen("D:\\Programming\\C++ Programming\\output.txt","w",stdout);
    #endif
    int t=1;
    cin>>t;
    
    while(t--){
        myf();
    }
    return 0;
}