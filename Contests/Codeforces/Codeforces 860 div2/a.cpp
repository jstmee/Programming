#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n ; cin>>n;
    vector<int> a(n),b(n);

    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    for(int i =0;i<n;i++){
        cin>>b[i];
    }

    int p=a[n-1];
    int q=b[n-1];
    for(int i=n-2;i>=0;i--){
        if(a[i]==b[i] && a[i]<=p && b[i]<=q){
            continue;
        }
        else if(a[i]<=p && b[i]<=q){
            continue;

        }
        else {
            swap(a[i],b[i]);
            if(a[i]<=p && b[i]<=q){
                continue;
            }else{
                cout<<"NO"<<endl;
                return;
                
            }

        }
        //1 1 2 2 1 2 2
        //1 2 1 2 1 1 1
        //
        //

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