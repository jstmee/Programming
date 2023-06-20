#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    vector<int> v(n);
    int neg=0,pos=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==-1){
            neg++;
        }
        else{
            pos++;
        }
    }

    if(pos>=neg  && neg%2==0){

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