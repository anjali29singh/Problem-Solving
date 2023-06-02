#include <bits/stdc++.h>
using namespace std;
int maxn = 1e7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M; // N=no. of coins M= total sum
    cin >> N >> M;
    int den[N];
    for (int i = 0; i < N; i++)
        cin >> den[i];

    int dp[N + 1][M + 1];
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= M; j++)
        {
            if (j == 0)
                dp[i][j] = 0;
            else
                dp[i][j] = maxn;
        }
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            if (den[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
            else
            {
                dp[i][j] = min(dp[i - 1][j], 1 + dp[i][j - den[i - 1]]);
            }
        }
    }
    if (dp[N][M] == maxn)
        cout << -1 << '\n';
    else
        cout << dp[N][M] << '\n';

    return 0;
}