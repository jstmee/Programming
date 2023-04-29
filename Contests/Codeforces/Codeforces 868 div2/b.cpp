#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n,k;cin>>n>>k;
    vector<int> v1(n),v2(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
        v2[i]=v1[i];
    }
    sort(v1.begin(),v1.end());

    for(int i=0;i<n;i++){
        if(i+k<n){
            if(v2[i]>v2[i+k]){

                swap(v2[i],v2[i+k]);
            }
            

        }
        
    }
    for(int i=n-1;i>=0;i--){
        if(i-k>=0){
            if(v2[i]<v2[i-k]){

                swap(v2[i],v2[i-k]);
            }
            

        }
        
    }
    int check=0;
    for(int i=0;i<n;i++){
        if(v2[i]!=v1[i]){
            check++;
        }
    }
    if(check==0){
        cout<<0<<endl;
        return;
    }
    // if(check==2){
    //     cout<<1<<endl;return;

    // }
    // cout<<-1<<endl;return;

    for(int i=0;i<n-1;i++){
        if(v2[i]<v2[i+1]){
            swap(v2[i],v2[i+1]);
            break;

        }
    }
    for(int i=0;i<n;i++){
        if(i+k<n){
            if(v2[i]>v2[i+k]){

                swap(v2[i],v2[i+k]);
            }
            

        }
        
    }
    for(int i=n-1;i>=0;i--){
        if(i-k>=0){
            if(v2[i]<v2[i-k]){

                swap(v2[i],v2[i-k]);
            }
            

        }
        
    }
    check=0;
    for(int i=0;i<n;i++){
        if(v2[i]!=v1[i]){
            check++;
        }
    }
    if(check==0){
        cout<<1<<endl;
        return;
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