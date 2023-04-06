#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n,k;
    cin>>n>>k;
    int yup=n/k;
    if(yup<0){
        cout<<"NO"<<endl;return;
    }
    for(int y=0;y<=yup;y++){

        int x=n-(k*y);
        if(x%2==0){
            if(x/2>=0){
                cout<<"YES"<<endl;return;
            }

        }
        else{
            continue;
        }


    }
    cout<<"NO"<<endl;


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