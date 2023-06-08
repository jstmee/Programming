#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int n;cin>>n;
    string s;cin>>s;
    string ans="";
    int i=1;
    char temp=s[0];
    while(i<n){
        if(temp!=s[i]){
            i++;
        }
        else if(temp==s[i]){
            ans.push_back(s[i]);
            if(i+1<n){
                temp=s[i+1];
                
            }
            i+=2;
            
        }



    }
    cout<<ans<<endl;


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