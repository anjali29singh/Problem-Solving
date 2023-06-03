#include <bits/stdc++.h>
using namespace std;
long long maxn = 1e9 + 7;
int main()
{
    int N;
    cin >> N;

    int arr[N][N];

    long long dp[N + 1][N + 1];

    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= N; j++)
            dp[i][j] = 0;
    }
    for (int i = 0; i < N; i++)
    {
        char c;
        for (int j = 0; j < N; j++)
        {
            cin >> c;
            if (c == '*')
                arr[i][j] = 0;
            else
                arr[i][j] = 1;
        }
    }

    // dp[1][1]=1 since we can reach cell (1,1) always

    if (arr[0][0] == 1)
        dp[1][1] = 1;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i == 1 && j == 1)
                continue;

            if (arr[i - 1][j - 1] == 0)
                dp[i][j] = 0;
            else
            {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % maxn;
            }
        }
    }
    cout << dp[N][N] << '\n';

    return 0;
}