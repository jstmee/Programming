#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    if(n==1) {
        cout<<1<<endl;
        return;
    }
    if(n%2!=0){
        cout<<-1<<endl;return;
    }
    // 
    //6 5 2 3 4 1
    //0 5 1 4 2 3
    //
    cout<<n<<" "<<n-1<<" ";
    for(int i=2;i<n;i=i+2){
        cout<<i<<" "<<n-1-i<<" ";
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