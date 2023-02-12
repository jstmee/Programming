#include<bits/stdc++.h>
#define int long long
using namespace std;

void myf(){
    
    int n;cin>>n;
    string s;cin>>s;
    int count=0;
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && 
        s[i]!='u'){
            count++;
            ans=max(ans,count);

        }
        else{
            count=0;
        }
        
    }
    if(ans>=4){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    
    


    

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