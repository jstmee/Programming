#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    vector<int> v(n);
    int zeros=0,ones=0,nz=0,twos=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==0){
            zeros++;
        }
        else {
            nz++;
            if(v[i]==1){
                ones++;
            }
            else if(v[i]==2){
                twos++;
            }
        }
    }
    if(zeros<=nz+1){
        cout<<0<<endl;
        return;
    }
    else{
        if(ones<=nz-ones+1){
            cout<<1<<endl;
            return;
        }
        else if(twos<=nz-twos+1){
            cout<<2<<endl;
            return;

        }
    }
    cout<<1<<endl;



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