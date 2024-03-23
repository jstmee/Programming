#include<bits/stdc++.h>
#define int long long
using namespace std;


bool comp(string s1, string s2){
         
         if(s1.size()<s2.size()){
             // return true;
             return s1<s2;
         }
         return s1<s2;
         
    }
vector<string> shortestSubstrings(vector<string>& arr) {
        
        int n=arr.size();
        vector<string> ans(n,""); 
        for(int i=0;i<n;i++){//100
            string pp=arr[i];
            int sz=pp.size();
            vector<string> a;
            for(int j=0;j<sz;j++){//20
                
                string s="";
                
                for(int k=j;k<sz;k++){//20
                    s.push_back(pp[k]);
                    bool check=false;
                    for(int l=0;l<n;l++){//20
                        if(i!=l){
                            if(arr[l].find(s)!=string::npos){//20
                                check=true;
                            }
                        }
                    }
                    if(check==false){
                        a.push_back(s);
                    }                  
                    
                    
                    
                }
                                 
            }
            sort(a.begin(),a.end(),comp);
                if(a.size()==0){
                    ans[i]="";
                }             
                else{
                    ans[i]=a[0];
                } 
            
        }
        return ans;
    }

void myf(){

    vector<string> arr={"gfnt","xn","mdz","yfmr","fi","wwncn","hkdy"};

    vector<string> p=shortestSubstrings(arr);
    for(auto it:p){
        cout<<it<<" ";
    }
    cout<<endl;



}



int32_t main(){
    #ifndef ONLINE_JUDGE
           freopen("D:\\Programming\\C++ Programming\\input.txt","r",stdin);
           freopen("D:\\Programming\\C++ Programming\\output.txt","w",stdout);
    #endif
    int t=1;
    // cin>>t;
    
    while(t--){
        myf();
    }
    return 0;
}