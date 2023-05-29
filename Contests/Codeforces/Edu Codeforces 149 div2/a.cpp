#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int x,k;cin>>x>>k;
    vector<int> v;
    for(int i=x;i>=0;i--){
        if(i%k!=0){
            v.push_back(i);
        }
    }

    int ans=0;
    vector<int> myans;
    int c=0;
    for(int i=0;i<v.size();i++){
        ans+=v[i];
        if(ans<=x){
            c++;
            myans.push_back(v[i]);
            if(ans==x){
                break;
            }
        }
        else{
            ans-=v[i];
        }
    }
    cout<<c<<endl;
    for(auto it:myans){
        cout<<it<<" ";
    }
    cout<<endl;


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