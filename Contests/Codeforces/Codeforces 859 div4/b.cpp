#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    vector<int> even;
    vector<int> odd;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        if(p%2==0){
            even.push_back(p);
        }
        else {
            odd.push_back(p);
        }
    }
    sort(even.begin(),even.end(),greater<int>());
    
    sort(odd.begin(),odd.end());

    int mihi=0,bianca=0;
    

    for(int j=0;j<even.size();j++){
        mihi+=even[j];
    }
    for(int i=0;i<odd.size();i++){
        bianca+=odd[i];
        if(mihi<=bianca){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
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