#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    string ss;cin>>ss;
    map<char,int> mpp;
    for(int i=0;i<n;i++){

        if(mpp.find(ss[i])==mpp.end()){
            mpp[ss[i]]=i;
        }
        else{
            if((i-mpp[ss[i]])%2!=0){
                cout<<"NO"<<endl;
                return;

            }
            mpp[ss[i]]=i;

        }
    }
    cout<<"YES"<<endl; 


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