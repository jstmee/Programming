#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    // int n;cin>>n;
    int till=1e6+10;
    int k=2;
    vector<int> ans(1e6+10,0);
    while(true){
        int temp=1+k+k*k;
        int x=k*k;
        if(temp>till){
            break;
        }
        while(temp<till){
            ans[temp]=1;
            temp+=x*k;
            x=x*k;
        }
        k++;
    }
    int tt;cin>>tt;
    while(tt--){
        int n;cin>>n;
        if(ans[n]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
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