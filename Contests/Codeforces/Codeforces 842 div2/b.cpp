#include<bits/stdc++.h>
#define int long long
using namespace std;

void myf(){
    int n,k;
    cin>>n>>k;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int p=1;
    for(int i=0;i<n;i++){
        if(v[i]==p){
            p++;
        }
    }
    p--;

    int nonsortednumber=n-p;
    if(nonsortednumber%k==0){
        cout<<nonsortednumber/k<<endl;
        return;
    }
    else{
        cout<<(nonsortednumber/k)+1<<endl;
        return;
    }
    
    


}

int32_t main(){
    #ifndef ONLINE_JUDGE
           freopen("input.txt","r",stdin);
           freopen("output.txt","w",stdout);
    #endif
    int t;cin>>t;
    while(t--){
        myf();
    }

    return 0;
}