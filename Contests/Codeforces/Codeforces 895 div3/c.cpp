#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int a,b;cin>>a>>b;
    // int na=a-2;
    // int nb=b-2;

    // if(4>b){
    //     cout<<-1<<endl;return;
    // }

    // int newl=ceil(na/(double)2);
    // int newu=floor(nb/(double)2);

    // if(2+2*newu>=a && 2+2*newu<=b ){

    //     cout<<2<<" "<<2*newu<<endl;return;
    // }
    // cout<<-1<<endl;

    for(int i=2;i<=100000;i++){
        int na=a-i;
        int nb=b-i;

        // if(4>b){
        //     cout<<-1<<endl;return;
        // }

        int newl=ceil(na/(double)i);
        int newu=floor(nb/(double)i);

        if(newl<=newu){

            if(i+i*newu>=a && i+i*newu<=b  ){

            if (i * newu <= 0)
            {
                continue;
            }

            cout<<i<<" "<<i*newu<<endl;return;
        }

        }
        else{
            continue;
        }
        
        
        // cout<<-1<<endl;
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