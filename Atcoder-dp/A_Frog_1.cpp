// push dp approach or bottom to up approach

#include <bits/stdc++.h>
using namespace std;
int Maxn = 1e6;
int main()
{
    int N;
    cin >> N;
    int h[N];

    vector<int> dp(N, Maxn);
    for (int i = 0; i < N; i++)
        cin >> h[i];
    // base case to reach 1 cost =0
    dp[0] = 0;

    // push dp approach or bottom to up approach

    for (int i = 0; i < N - 1; i++)
    {
        dp[i + 1] = min(dp[i + 1], dp[i] + abs(h[i + 1] - h[i]));
        if (i + 2 < N)
            dp[i + 2] = min(dp[i + 2], dp[i] + abs(h[i + 2] - h[i]));
    }

    // // pull dp // top down approach
    // for (int i = 1; i < N; i++)
    // {
    //     dp[i] = min(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
    //     if (i - 2 >= 0)
    //         dp[i] = min(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
    // }

    cout << dp[N - 1] << '\n';

    return 0;
}