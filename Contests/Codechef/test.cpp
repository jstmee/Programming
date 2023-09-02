#include<bits/stdc++.h>
#define int long long
using namespace std;
/*
10 19 7 1 17 11 8 5 12 9 4  18 14 2  6  15 3  16 13
1  2  3 4 5  6  7 8 9 10 11 12 13 14 15 16 17 18 19
*/
void myf(){
    string a,b;cin>>a>>b;

    for(int i=1;i<a.size();i++){
        if(a[i-1]=='0' && a[i]=='1' && b[i-1]=='0' && b[i]=='1'){
            cout<<"YES"<<endl;return;
        }
        // cout<<"NO"<<endl;return;
    }
    cout<<"NO"<<endl;return;


    
    
    



    




    
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