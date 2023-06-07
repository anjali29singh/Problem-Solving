#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
int maxn = 1e6;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<long long> dp(maxn + 1, 0);
    dp[1] = 2;
    dp[2] = 8;
    for (int i = 3; i <= maxn; i++)
    {
        dp[i] = ((6 * dp[i - 1] - 7 * dp[i - 2]) % mod + mod) % mod;
    }
    int t;
    cin >> t;
    while (t--)
    {

        int n;

        cin >> n;
        cout << dp[n] << '\n';
    }

    return 0;
}