#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int ans=0;
    for(int i=0;i<n;i++){
        ans^=v[i];
    }
    if(n%2!=0){
        cout<<ans<<endl;
        return;
    }
    else{
        if(ans==0){
            cout<<ans<<endl;
            return;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }


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