#include <bits/stdc++.h>

using namespace std;
long long maxn = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; // N = sum

    cin >> N;

    int mod = 1e9 + 7;

    vector<int> dp(N + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= 6 && j <= i; j++)
        {
            dp[i] = (dp[i] + dp[i - j]) % mod;
        }
    }
    cout << dp[N] << '\n';
    return 0;
}