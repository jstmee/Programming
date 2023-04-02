#include<bits/stdc++.h>
#define int long long
using namespace std;


 
int getClosest(int val1, int val2,
               int target)
{
    if (target - val1 >= val2 - target)
        return val2;
    else
        return val1;
}
int findClosest(vector<int> &arr, int n, int target)
{
    
    if (target <= arr[0])
        return arr[0];

    if (target >= arr[n - 1])
        return arr[n - 1];

    int i = 0, j = n, mid = 0;
    while (i < j) {
        mid = (i + j) / 2;
 
        if (arr[mid] == target)
            return arr[mid];
 

        if (target < arr[mid]) {

            if (mid > 0 && target > arr[mid - 1])
                return getClosest(arr[mid - 1],
                                  arr[mid], target);  
            j = mid;
        }

        else {
            if (mid < n - 1 && target < arr[mid + 1])
                return getClosest(arr[mid],
                                  arr[mid + 1], target);

            i = mid + 1;
        }
    }
 
    
    return arr[mid];
}
 



void myf(){

    int n,m;cin>>n>>m;
    vector<int> kk(n);
    for(int i=0;i<n;i++){
        cin>>kk[i];


    }
    sort(kk.begin(),kk.end());
    vector<vector<int>> z(m,vector<int> (3,0));
    for(int i=0;i<m;i++){
        cin>>z[i][0];
        cin>>z[i][1];
        cin>>z[i][2];
    }
    vector<int> ans;
    for(auto pp:z){
        int a=pp[0];
        int b=pp[1];
        int c=pp[2];
        int tempans=findClosest(kk,n,b);
        ans.push_back(tempans);
        
    }
    for(int i=0;i<m;i++){
        if(ans[i]!=0){
            cout<<"YES"<<endl;
            cout<<ans[i]<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    cout<<endl;





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