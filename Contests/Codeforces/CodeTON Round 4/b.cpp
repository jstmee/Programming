#include<bits/stdc++.h>
#define int long long
using namespace std;

//17
//1
//3
//7
//15


void myf(){

    int n;cin>>n;
    if(n%2==0){
        cout<<-1<<endl;
        return;
    }

    int tempcandy=3;
    int tempans=1;
    for(int i=0;i<39;i++){
        tempcandy=tempcandy*2-1;
        tempans++;
        if(tempcandy==n){
            cout<<tempans<<endl;
            cout<<2<<" ";
            for(int j=0;j<tempans-1;j++){
                cout<<1<<" ";
            }
            cout<<endl;
            return;
            break;
            
        }
        
    }
    int candy=1;
    int ans=0;
    int check=0;
    int spell=0;
    for(int i=0;i<40;i++){


        
        spell++;
        candy=candy*2+1;
        ans++;
        if(candy==n){
            check=2;
            break;

        }
        if(candy>n){
            check=1;
            break;

        }

    }


    if(check==2){
        cout<<spell<<endl;
        for(int i=0;i<ans;i++){
            cout<<2<<" ";
        }
        cout<<endl;
        return;
    }
    ans--;
    candy=candy-1;
    candy=candy/2;
    int diff=n-candy;
    if(diff>ans){
        cout<<-1<<endl;

        return;
    }
    else{
        cout<<spell<<endl;
        int pp=ans-diff;
        if(diff!=ans){
            for(int i=0;i<pp;i++){
            cout<<2<<" ";
        }

        }
        
        for(int i=pp;i<=ans;i++){
            cout<<1<<" ";
        }
        cout<<endl;
        return;
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