#include <iostream>
#include <vector>
using namespace std;



void _(void) {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
}

typedef long long i64;
const int N = 100010;
vector<int> g[N];
int n, curr_color, color[N];
bool ok;

bool dfs(int v, int parent) {
    ok = ok && (color[v] == curr_color);
    for (int i = 0; i < g[v].size(); i++) {
        if (g[v][i] != parent)
            dfs(g[v][i], v);
    }
}

bool solve(int v) {
    int ans = true;
    for (int i = 0; i < g[v].size(); i++) {
        curr_color = color[g[v][i]];
        ok = true;
        dfs(g[v][i], v);
        ans = ans && ok;
    }
    return ans;
}

int main() {
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (int i = 0; i < n; i++) cin >> color[i + 1];
    int root1 = -1, root2 = -1;
    for (int i = 1; i < n + 1; i++) {
        for (auto elem : g[i]) {
            if (color[elem] != color[i]) {
                root1 = elem;
                root2 = i;
            }
        }
    }
    if (root1 == -1) {
        cout << "YES\n1";
        return 0;
    }
    bool res1 = solve(root1);
    bool res2 = solve(root2);
    if (res1)
        cout << "YES\n" << root1;
    else if (res2)
        cout << "YES\n" << root2;
    else
        cout << "NO";
    return 0;
}