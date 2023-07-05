#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    ll total = 0, attack = 0;
    ll ans = 0;
    for (int k = 1; k <= n; k++)
    {
        ll sq = k * k;
        total = (sq * (sq - 1)) / 2;
        attack = 4 * (k - 1) * (k - 2);
        ans = total - attack;
        cout << ans << '\n';
    }

    return 0;
}