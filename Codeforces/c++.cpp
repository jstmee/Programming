#include<bits/stdc++.h>
#define int long long
using namespace std;

void myf(){
    int n;cin>>n;
    vector <int> v(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        
        mp[v[i]]++;
    }
    if(n==1 && v[0]==1){
        cout<<"YES"<<endl;
        cout<<1<<endl;
        cout<<1<<endl;
        return;
    }
    if(n==1 && v[0]!=1){
        cout<<"NO"<<endl;
        return;
    }
    if(mp.size()==n){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        // reverse(v.begin(),v.end());
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    // else if(n==2 && (mp.size()<n || mp.size()>n)){
    //     cout<<"NO"<<endl;
    // }


    if(mp.size()==n-1){
        if(mp[n]==2){
            int flag=0;
            for(int i=2;i<n;i++){
                if(mp[i]<1 || mp[i]>1){
                    flag=1;
                }

            }
            if(flag==0){
                cout<<"YES"<<endl;
                vector <int > v1(n),v2(n);
                //5 3 4 2 1
                //1 3 4 2 5
                int flagg=0;
                for(int i=0;i<n;i++){
                    if(flagg==0){

                        if (v[i] == n){
                            flagg = 1;
                            v1[i] = n;
                            v2[i] = 1;
                        }
                    }
                    else if(v[i]==n){
                        flagg=0;
                        v1[i]=1;
                        v2[i]=n;
                    }
                    

                }
                for(int i=0;i<n;i++){
                    if(v[i]!=n){
                        v1[i]=v[i];
                        v2[i]=v[i];
                    }
                }
                for(int i=0;i<n;i++){
                    cout<<v1[i]<<" ";
                }
                cout<<endl;
                for(int i=0;i<n;i++){
                    cout<<v2[i]<<" ";
                }
                cout<<endl;
                

                

                return;
            }
            else{
                cout<<"NO"<<endl;
            }

        }
        else{
            cout<<"NO"<<endl;
            return;
        }

    }
    else{
        cout<<"NO"<<endl;
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