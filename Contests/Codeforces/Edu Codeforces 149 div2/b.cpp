#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    string s;cin>>s;
    int ans=INT_MIN;
    int c=1;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            c++;
            ans=max(ans,c);

        }
        else {
            c=1;
        }
    }
    ans=max(ans,c);
    cout<<ans+1<<endl;
    

    
    
    

    


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