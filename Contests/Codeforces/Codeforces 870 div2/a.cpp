#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];

    }
    int ans=-1;
    for(int i=0;i<=n;i++){
        // int lier=i;
        int a=0;
        for(int j=0;j<n ;j++){
            if(v[j]>i){
                a++;
            }

        }
        if(a==i){
            cout<<a<<endl;
            return;
        }
        
    }

    cout<<-1<<endl;

    


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