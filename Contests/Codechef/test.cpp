#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    string s;cin>>s;
    
    string temp="";
    temp.push_back(s[0]);
    
    
    
    for(int i=1;i<n-1;i++){
        char p=temp[temp.size()-1];
        if(p!=s[i]){
            temp.push_back('1');
        }
        else{
            temp.push_back('0');

        }
        
       
    }
    // cout<<temp<<" "<<endl;

    //case 1
    int temp1=1;
    for(int i=0;i<temp.size();i++){

        if(temp[i]=='0'){
            temp1++;
        }
        // else{
        //     continue;
        // }


    }

    int temp2=0;
    for(int i=0;i<n-1;i++){

        if(temp[i]=='1'){
            temp2++;
        }
        // else{
        //     continue;
        // }


    }

    cout<<max(temp1,temp2)<<endl;return;

    
    
    


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