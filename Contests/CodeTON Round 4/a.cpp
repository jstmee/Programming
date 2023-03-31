#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    vector<int> v(n);
    int mini=INT_MAX,maxi=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mini=min(mini,v[i]);
        maxi=max(maxi,v[i]);
    }
    int x=0;
    for(int i=0;i<n;i++){
        x++;
        for(int j=i;j<n;j++){
            if(v[j]==x){
                cout<<"YES"<<endl;
                return;
            }
        }
    }

    cout<<"NO"<<endl;
    return;
    


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