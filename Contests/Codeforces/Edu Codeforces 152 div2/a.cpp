#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int a,b,c;cin>>a>>b>>c;
    int ans=2;
    a-=2;
    while(true){

        if(b>0){
            ans++;
            b--;
            if(a>0){
                ans++;
                a--;
            }
            else{
                break;
            }
        }
        else{
            if(c>0){
                ans++;
                c--;
                if(a>0){
                    ans++;
                    a--;
                }
                else{
                    break;
                }
            }

        }
        
    }
    cout<<ans<<endl;


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