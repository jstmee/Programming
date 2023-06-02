#include<bits/stdc++.h>
#define int long long
using namespace std;

/*
4 1 6 7 2 8 5 3 9
4 3 2 1




*/
void myf(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        cout<<n-v[i]+1<<" ";
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