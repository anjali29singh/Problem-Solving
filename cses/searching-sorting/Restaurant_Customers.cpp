#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<pair<int, int>> vec;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        vec.push_back(make_pair(a, +1));
        vec.push_back(make_pair(b, -1));
    }

    int ans = 0, cnt = 0;
    sort(vec.begin(), vec.end());

    for (auto i : vec)
    {
        cnt = cnt + i.second;
        ans = max(ans, cnt);
    }
    cout << ans << '\n';

    return 0;
}