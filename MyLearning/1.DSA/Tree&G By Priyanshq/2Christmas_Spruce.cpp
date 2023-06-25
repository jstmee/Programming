#include <bits/stdc++.h>
#define int long long
using namespace std;

/*

https://codeforces.com/problemset/problem/913/B

accepted

*/

bool dfs(int node, int parent, vector<int> &leaf, vector<int> adj[])
{
    if (leaf[node] != 0)
    {
        int count = 0;
        bool tempans = true;
        for (auto it : adj[node])
        {
            if (leaf[it] == 0)
            {
                count++;
            }
            else
            {
                tempans = tempans && dfs(it, node, leaf, adj);
            }
        }
        if (count >= 3 && tempans)
        {
            return tempans;
        }
        else
        {
            return false;
        }
    }
    return leaf[node] == 0;
}
void myf()
{

    int n;
    cin >> n;
    vector<int> adj[n + 1];
    for (int i = 1; i < n; i++)
    {
        int a;
        cin >> a;
        adj[a].push_back(i + 1);
    }
    vector<int> leaf(n + 1, -1);
    for (int i = 1; i <= n; i++)
    {
        leaf[i] = adj[i].size();
    }
    cout << ((dfs(1, -1, leaf, adj) == 1) ? "Yes" : "No") << endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\Programming\\C++ Programming\\input.txt", "r", stdin);
    freopen("D:\\Programming\\C++ Programming\\output.txt", "w", stdout);
#endif
    int t = 1;
    while (t--)
    {
        myf();
    }
    return 0;
}