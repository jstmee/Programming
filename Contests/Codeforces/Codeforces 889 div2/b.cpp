#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    int ans=INT_MIN;
    for(int i=1;i<=10000;i++){
        int temp=i;
        int tempans=0;
        while(true){
            if(n%temp==0){
                temp++;
                tempans++;
                ans=max(ans,tempans);
            }
            else{
                break;
            }
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