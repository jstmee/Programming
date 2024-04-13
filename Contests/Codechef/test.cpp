#include<bits/stdc++.h>

#define int long long
using namespace std;

/*

given beuatifull arrray a1 a2...

return min no of element to remove for not it to beuatufull

5-3
2

5
1 2 1 2 1


*/
void myf() {

    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(n==1){
        cout<<-1<<endl;
        return;
    }
    if(n==2){
        if(v[0]!=v[1]){
            cout<<0<<endl;
            return;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }

    if((v[0]!=v[1] and v[0]!=v[2]) or (v[n-1]!=v[n-2] and v[n-1]!=v[n-3])){
        cout<<0<<endl;
        return;
    }

    int ans=INT_MAX;
    for(int i=0;i<n-1;i++){
        if(i!=0 and v[i]!=v[i-1]){
            // v[i]=v[i-1];
            ans=min(ans,i);
            break;
        }
    }
    for(int i=n-1;i>=1;i--){
        if(i!=n-1 and v[i]!=v[i+1]){
            ans=min(ans,n-i-1);
        }
    }
    if(ans==INT_MAX){
        cout<<-1<<endl;
        return;
    }
    cout<<ans<<endl;



    



    






    
    
    

    
}

int32_t main() {

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);



    #ifndef ONLINE_JUDGE
        freopen("D:\\Programming\\C++ Programming\\input.txt","r",stdin);
        freopen("D:\\Programming\\C++ Programming\\output.txt","w",stdout);
    #endif

    int t;
    t=1;
    cin>>t;
    while(t--) {
        myf();
    }

    return 0;
}