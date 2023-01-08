//problem name min window substring leetcode
//https://leetcode.com/problems/minimum-window-substring/


#include<bits/stdc++.h>
using namespace std;

string minWindow(string s,string t){
    //creating a map
        unordered_map<char,int> mp;
        int n=s.length();
        //traversing the t string for getting map values
        for(int i=0;i<t.length();i++){
            mp[t[i]]++;
        }

        //creating the variables
        int i=0,j=0,count=mp.size();
        int ans=INT_MAX;
        int start=0,end=0;
        while(j<n){
            //calculation
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    count--;
                }

            }

            //for sliding the window 
            if(count>0){
                j++;
            }
            else if(count==0){
                //getting the possible ans
                // ans=min(ans,j-i+1);
                // start=i;
                // end=j;
                int p=ans;
                ans=min(ans,j-i+1);
                if(p!=ans){
                    start=i-1;
                }
                

                //trying to minimize the ans
                while(count==0){
                    if(mp.find(s[i])==mp.end()){
                        i++;
                        //updating the ans
                        ans=min(ans,j-i+1);
                        start=i;
                        end=j;

                    }
                    else{
                        mp[s[i]]++;
                        if(mp[s[i]]>0){
                            i++;
                            count++;
                        }
                        else{
                            i++;
                            ans=min(ans,j-i+1);
                            start=i;
                            end=j;
                        }
                    }
                    
                }
                j++;
            }


        }
        cout<<start<<" "<<end<<""<<endl;
        if(ans!=INT_MAX){
            return s.substr(start,ans);
        }
        else{
            return "";
        }
}
void myf(){
    string s;
    cin>>s;
    string t;cin>>t;

    cout<<minWindow(s,t)<<endl;
    
    
    



    
    
    


}

int32_t main(){
    #ifndef ONLINE_JUDGE
           freopen("input.txt","r",stdin);
           freopen("output.txt","w",stdout);
    #endif
    int t=1;
    // cin>>t;
    while(t--){
        myf();
    }

    return 0;
}