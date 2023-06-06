#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    if ((n * (n + 1)) % 4 != 0)
    { // cannot divided into two sets of each sum n*(n+1)/4;
        cout << 0 << '\n';
    }

    else
    {

        int maxsum = (n * (n + 1)) / 4;

        vector<vector<int>> dp(n, vector<int>(maxsum + 1, 0));
        dp[0][0] = 1;
        // 1 to n-1 because  putting n in second subset and hence counting each no. only once.
        // if n is also considered then each no. is counted as twice.
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j <= maxsum; j++)
            {
                if (i == j)
                {
                    dp[i][j] = 1 + dp[i - 1][j];
                }
                else if (i > j)
                {
                    dp[i][j] = dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = (dp[i - 1][j - i] + dp[i - 1][j]) % mod;
                }
            }
        }
        cout << dp[n - 1][maxsum] << '\n';
    }

    return 0;
}