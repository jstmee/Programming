#include<bits/stdc++.h>
#define int long long
using namespace std;
void myf(){
    int n;cin>>n;
    vector <int> v(n);
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }

    if(mp.size()==1){
        cout<<"NO"<<endl;
        return;
    }
    sort(v.begin(), v.end(), greater<int>()); 
    if(v[0]==v[1]){
        int temp=v[n-1];
        v[n-1]=v[1];
        v[1]=temp;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;

    


    

}
int32_t main(){
    #ifndef ONLINE_JUDGE
           freopen("input.txt","r",stdin);
           freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        myf();
    }
    return 0;
}