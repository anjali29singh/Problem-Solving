#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool sortrow(const vector<int> &v1, const vector<int> &v2)
{
    return v1[0] < v2[0];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<vector<ll>> vec(n, vector<ll>(2, 0));

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        vec[i][0] = x;
        vec[i][1] = i;
    }
    sort(vec.begin(), vec.end());
    ll ans = 1, lst = vec[0][1];
    for (int i = 1; i < n; i++)
    {
        if (vec[i][1] < lst)
        {
            ans = ans + 1;
        }
        lst = vec[i][1];
    }
    cout << ans << '\n';
    return 0;
}