#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    string s;cin>>s;
    int ans=-1;
    int n=s.size();
    int l=0,r=n-1;
    set<char> ss;
    for(int i=0;i<n;i++){
        ss.insert(s[i]);
    }
    if(ss.size()==1){
        cout<<-1<<endl;
        return;
    }
    cout<<n-1<<endl;
    // while(l<r){
    //     if(s[l]!=s[r]){
    //         ans=r-l+1;
    //         break;
    //     }
    //     l++;
    //     if(s[l]!=s[r]){
    //         ans=r-l+1;
    //         break;
    //     }
    //     l--;
    //     r--;
    //     if(s[l]!=s[r]){
    //         ans=r-l+1;
    //         break;
    //     }

    //     r++;

    //     l++;
    //     r--;






        

    // }

    // cout<<ans<<endl;


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