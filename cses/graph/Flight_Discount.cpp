#include <bits/stdc++.h>
using namespace std;
int N, M;
#define ll long long
ll INTMAX = 1e15;
typedef pair<ll, int> ipair;

// meet in the middle problem .
//  start dijikstra's from 1 and store result in vector<ll> front;
// start dijikstra's from n and store result in vecotr<ll> back;
// for each edge u->v take minimum front[u]+ wt/2+back[v];
void djkf(int src, vector<vector<pair<int, int>>> adj, vector<ll> &dist)
{

    priority_queue<ipair, vector<ipair>, greater<ipair>> pq;

    pq.push(make_pair(0, src));

    dist[src] = 0;

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        for (auto i : adj[u])
        {
            int v = i.first, wt = i.second;

            if (dist[v] > dist[u] + (ll)wt)
            {
                dist[v] = dist[u] + (ll)wt;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
}
void djkn(int src, vector<vector<pair<int, int>>> adj, vector<ll> &dist)
{

    priority_queue<ipair, vector<ipair>, greater<ipair>> pq;

    pq.push(make_pair(0, src));

    dist[src] = 0;

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        for (auto i : adj[u])
        {
            int v = i.first, wt = i.second;

            if (dist[v] > dist[u] + (ll)wt)
            {
                dist[v] = dist[u] + (ll)wt;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> M;
    vector<vector<pair<int, int>>> adj1(N + 1), adj2(N + 1);
    vector<vector<int>> edges;
    for (int i = 0; i < M; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj1[u].push_back(make_pair(v, wt));
        adj2[v].push_back(make_pair(u, wt));
        edges.push_back({u, v, wt});
    }

    vector<ll> front(N + 1, INTMAX);
    vector<ll> back(N + 1, INTMAX);
    djkf(1, adj1, front);
    djkn(N, adj2, back);

    ll ans = INTMAX;
    for (auto i : edges)
    {
        int u = i[0], v = i[1];
        ll wt = i[2];
        ll currt = (ll)(front[u] + back[v]) + (wt / 2);
        ans = min(ans, currt);
    }
    cout << ans << '\n';
    return 0;
}