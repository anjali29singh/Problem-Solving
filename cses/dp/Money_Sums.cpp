#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;

    int arr[n];

    int maxsum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxsum = maxsum + arr[i];
    }

    sort(arr, arr + n);

    vector<vector<int>> dp(n + 1, vector<int>(maxsum + 1, 0));

    for (int i = 0; i <= n; i++)
        dp[i][0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= maxsum; j++)
        {

            if (arr[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j] || (dp[i - 1][j - arr[i - 1]]);
            }
        }
    }
    int total = 0;
    for (int i = 1; i <= maxsum; i++)
    {
        if (dp[n][i] == 1)
        {
            total++;
        }
    }

    cout << total << '\n';
    for (int i = 1; i <= maxsum; i++)
    {
        if (dp[n][i] == 1)
        {
            cout << i << " ";
        }
    }
    cout << '\n';
    return 0;
}