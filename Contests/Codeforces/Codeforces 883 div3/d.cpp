#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    long double n,d,h;cin>>n>>d>>h;
    vector<double> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long double half=(long double)1/2;
    long double area=half*d*h;
    long double ans=area;
    for(int i=1;i<n;i++){
        long double prevh=v[i-1];
        long double tillh=prevh+h;
        ans+=area;
        if(v[i]<tillh){
            long double htosub=tillh-v[i];
            long double base=(d*htosub)/h;
            long double temparea=half*base*htosub;
            ans-=temparea;
        }
    }
    cout << fixed << setprecision(7) <<ans<< endl;
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