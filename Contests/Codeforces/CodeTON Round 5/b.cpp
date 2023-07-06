#include<bits/stdc++.h>
#define int long long
using namespace std;

string decToBinary(int n)
{
    string ans="";
    // Size of an integer is assumed to be 32 bits
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            // cout << "1";
            ans.push_back('1');
        else
            ans.push_back('0');
    }
    return ans;
}

void myf(){

    int n,x;
    cin>>n>>x;
    string p=bitset<64> (x).to_string();
    int ans=0;
    vector<int> v1(n),v2(n),v3(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    for(int i=0;i<n;i++){
        cin>>v3[i];
    }
    for(int i=0;i<n;i++){
        int a=v1[i];
        bool check=true;
        string temp=bitset<64> (a).to_string();
        for(int j=temp.size()-1;j>=0;j--){
            if(p[j]=='0'){
                if(temp[j]=='1'){
                    check=false;
                    break;

                }
                
            }
        }
        if(check==false){
            break;
        }
        ans=ans|a;

    }

    for(int i=0;i<n;i++){
        int a=v2[i];
        bool check=true;
        string temp=bitset<64> (a).to_string();
        for(int j=temp.size()-1;j>=0;j--){
            if(p[j]=='0'){
                if(temp[j]=='1'){
                    check=false;
                    break;

                }
                
            }
        }
        if(check==false){
            break;
        }
        ans=ans|a;

    }

    for(int i=0;i<n;i++){
        int a=v3[i];
        bool check=true;
        string temp=bitset<64> (a).to_string();
        for(int j=temp.size()-1;j>=0;j--){
            if(p[j]=='0'){
                if(temp[j]=='1'){
                    check=false;
                    break;

                }
                
            }
        }
        if(check==false){
            break;
        }
        ans=ans|a;

    }
    

    if(ans==x){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;





}



int32_t main(){
    #ifndef ONLINE_JUDGE
           freopen("D:\\Programming\\C++ Programming\\input.txt","r",stdin);
           freopen("D:\\Programming\\C++ Programming\\output.txt","w",stdout);
    #endif
    int t=1;
    cin>>t;
    
    while(t--){
        myf();
    }
    return 0;
}