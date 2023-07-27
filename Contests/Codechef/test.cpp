#include<bits/stdc++.h>
#define int long long
using namespace std;


string removeDuplicates(string s) {

        stack<char> st;
        int n=s.size();
        for(int i=0;i<n;i++){

            st.push(s[i]);
            
            while(true){
                if(i!=n && st.top()==s[i+1]){
                    st.pop();
                    i+=2;
                }
                else{
                    break;
                }
            }
        }
        string ans="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
void myf(){
    
    cout<<removeDuplicates("azxxzy")<<endl;
    


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