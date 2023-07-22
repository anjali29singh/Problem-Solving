#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, m;
ll dfs(int node, int visited[], vector<vector<pair<int, ll>>> adj, ll route, ll &ans)
{
    visited[node] = 1;

    for (auto v : adj[node])
    {
        if (v.first == n)
        {
            visited[v.first] = 1;
            ans = max(ans, route + v.second);
        }
        if (!visited[v.first])
        {
            dfs(v.first, visited, adj, route + v.second, ans);
        }
    }
    if (node == n)
        ans = max(ans, route);
    else
    {
        route = 0;
        ans = -1000000000;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    vector<vector<pair<int, ll>>> adj(n + 1);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        ll x;
        cin >> a >> b;
        cin >> x;
        adj[a].push_back(make_pair(b, x));
        adj[b].push_back(make_pair(a, x));
    }
    int visited[n + 1] = {0};
    ll ans = -1000000000;

    cout << dfs(1, visited, adj, 0, ans) << '\n';

    return 0;
}