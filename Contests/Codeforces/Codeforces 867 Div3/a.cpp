#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n,t;cin>>n>>t;
    
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int temp=0;
    for(int i=0;i<n;i++){
        a[i]=a[i]+temp;
        temp++;
    }
    //4 4 5 5
    pair<int,int> ans={-1,-1};
    for(int i=0;i<n;i++){
        if(a[i]<=t){
            // ans.first=max(ans.first,b[i]);
            if(ans.first<b[i]){
                ans.first=b[i];
                ans.second=i+1;
            }

            
        }
    }
    cout<<ans.second<<endl;





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