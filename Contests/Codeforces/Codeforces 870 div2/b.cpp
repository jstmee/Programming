#include<bits/stdc++.h>
#define int long long
using namespace std;

bool checkpalindrome(int mod,vector<int> arr){
    int n=arr.size();
    for(int i=0;i<arr.size();i++){
        arr[i]=arr[i]%mod;
    }

    if(n==1){
        return true;
    }
    int flag = 0;
    for (int i = 0; i <= n / 2 && n != 0; i++) {
        if (arr[i] != arr[n - i - 1]) {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        return false;
    else
        return true;

}

void myf(){

    int n;cin>>n;
    vector<int> v(n);
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>v[i];
        ans=max(ans,v[i]);
    }
    for(int i=(ans);i>0;i--){

        if(checkpalindrome(i,v)==true){
            cout<<i<<endl;
            return;
        }
    }
    cout<<0<<endl;


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