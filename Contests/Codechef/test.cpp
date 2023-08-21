#include<bits/stdc++.h>
// #define int long long
using namespace std;

vector<int> topSort(unordered_map<int,vector<int>> &adj,vector<int> &indegree){
        queue<int> q;
        for(int i=0;i<adj.size();i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int> ans;
        while(!q.empty()){
            int temp=q.front();
            ans.push_back(temp);
            q.pop();
            for(auto it:adj[temp]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        if(ans.size()==adj.size()){
            return ans;
        }
        return {};
    }

vector<int> sortItems(int n, int m, vector<int>& group, vector<vector<int>>& beforeItems) {
        for(int i=0;i<n;i++){
            if(group[i]==-1){
                group[i]=m;
                m++;
            }
        }
        unordered_map<int,vector<int>> itemsGraph;
        vector<int> itemsIndegree(n,0);
        for (int i = 0; i < n; i++) {
            itemsGraph[i] = vector<int>();
        }
        unordered_map<int,vector<int>> groupGraph;
        vector<int> groupIndegree(m,0);
        for (int i = 0; i < m; ++i) {
            groupGraph[i] = vector<int>();
        }
        for(int i=0;i<n;i++){
            for(auto it:beforeItems[i]){
                itemsGraph[it].push_back(i);
                itemsIndegree[i]++;
                if(group[i]!=group[it]){
                    groupGraph[group[it]].push_back(group[i]);
                    groupIndegree[group[i]]++;
                }
            }
        }
        vector<int> itemsOrder=topSort(itemsGraph,itemsIndegree);
        vector<int> groupOrder=topSort(groupGraph,groupIndegree);
        unordered_map<int,vector<int>> groupToItemsInOrder;
        vector<int> ans;
        for(auto it:itemsOrder){
            groupToItemsInOrder[group[it]].push_back(it);
        }
        for(auto it:groupOrder){
            auto temp=groupToItemsInOrder[it];
            for(auto el:temp){
                ans.push_back(el);
            }
        }
        return ans;
    }

void myf(){
    vector<int> a={-1,-1,1,0,0,1,0,-1};
    vector<vector<int>> b={
        {},
        {6},
        {5},
        {6},
        {3,6},
        {},
        {},
        {}
    };
    auto it=sortItems(8,2,a,b);
    for(auto p:it){
        cout<<p<<" ";
    }


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