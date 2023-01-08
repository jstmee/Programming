#include<bits/stdc++.h>
#define int long long
using namespace std;
void myf(){
    int n;cin>>n;
    int arr[n][n];
    int mini=1;
    int maxi=n*n;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                if(j%2==0){
                    arr[i][j]=mini;
                    mini++;
                }
                else{
                    arr[i][j]=maxi;
                    maxi--;
                }
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
              if(j%2==1){
                    arr[i][j]=mini;
                    mini++;
                }
                else{
                    arr[i][j]=maxi;
                    maxi--;
                }  
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    

    


    

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