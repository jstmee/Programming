#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ind1=-1,ind2=-1;
    int tt;
    int indn=-1;
    for(int i=0;i<n;i++){
        if(v[i]==1){
            ind1=i;
            
        }
        if(v[i]==2){
            ind2=i;

        }
        if(v[i]==n){
            indn=i;
        }
    }
    if(abs(ind1-ind2)==1){
        if(ind1>ind2){
            if(ind1+1<n){
                cout<<ind1+1<<" "<<ind1+1+1<<endl;
                return;
            }
            else{
                if(ind2-1>=0){
                    cout<<ind2+1<<" "<<ind2-1+1<<endl;
                    return;
                }
            }
        }
        else{
            if(ind2+1<n){
                cout<<ind2+1<<" "<<ind2+2<<endl;
                return;
            }
            else {
                if(ind1-1>=0){
                    cout<<ind1+1<<" "<<ind1-1+1<<endl;
                    return;
                }
            }


        }
    }
    else {
        if(n>3){
            cout<<ind1+1<<" "<<indn+1<<endl;
            return;

        }else{
            cout<<ind1+1<<" "<<ind1+1<<endl;
            return;
        }
        
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