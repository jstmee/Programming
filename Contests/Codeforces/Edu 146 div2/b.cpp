#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int a,b;
    cin>>a>>b;
    int ans=0;
    if(a<=b){
        //for a
        int currm=1;
        if(a%2==0 ){
            ans+=min(a/2+1,a);
            if(ans!=a){
                currm=a/2-1;
            
            }

        }
        else {
            ans+=min((a+1)/2,a);
            // currm=a/2-1;
            if(ans!=a){
                currm=a/2-1;

            }



        }
        
        //for b
        if(b%2==0){
            if(currm<b/2){
                ans+=min(b/2-currm+2,b/currm);

            }
            else {
                ans+=2;
            }
        }
        else{
            if(currm<b/2){
                ans+=min(b/2-currm+3,b/currm);
            }
            else{
                ans+=3;
            }

        }




    }
    else {

        //for b
        int currm=1;
        if(b%2==0){
            ans+=b/2+1;
            currm=a/2-1;
        }
        else{
            ans+=(b+1)/2;
            currm=a/2-1;
        }

        //for a
        if(a%2==0){
            if(currm<a/2){
                ans+=a/2-currm+2;

            }
            else {
                ans+=2;
            }
        }
        else{
            if(currm<a/2){
                ans+=a/2-currm+3;
            }
            else{
                ans+=3;
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