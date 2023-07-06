#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int n;cin>>n;
    vector<int> q(n);
    for(int i=0;i<n;i++){
        cin>>q[i];
    }
    int check=1;
    vector<int > ans;
    for(int i=0;i<n;i++){

        if(i==0){
            ans.push_back(q[i]);
            cout<<1;
        }
        else{
            if(ans.back()<=q[i] && check){
                ans.push_back(q[i]);
                cout<<1;

            }
            else{
                if(ans.back()>q[i] &&check){
                    if(q[i]<=ans[0]){
                        check=0;
                        ans.push_back(q[i]);
                        cout<<1;
                    }
                    else{
                        cout<<0;
                    }
                }
                else{
                    if(ans.back()<=q[i] && ans[0]>=q[i]){
                        ans.push_back(q[i]);
                        cout<<1;
                    }
                    else{
                        cout<<0;
    
                    }

                }
            }
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