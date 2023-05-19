#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    //5 0 4
    //5-0+4-0
    //5+4

    int n;cin>>n;
    set<int> s;
    vector<int > v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        s.insert(v[i]);
    }
    if(s.size()==1){
        cout<<1<<endl;return;
    }
    int ans=0;
    int t=0;
    for(int i=0;i<=n-2;i++){
        if(v[i]>v[i+1]){
            if(t!=1){
                ans++;
            }
            t=1;

        }

        if(v[i]<v[i+1]){
            if(t!=-1){
                ans++;
            }
            t=-1;
        }

    }
    
    ans++;
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