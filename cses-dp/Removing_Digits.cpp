#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> dp(N + 1, 0);
    for (int i = 1; i <= N; i++)
    {

        int max_digit = i % 10, num = i;
        while (num != 0)
        {
            max_digit = max(max_digit, num % 10);
            num = num / 10;
        }

        dp[i] = dp[i - max_digit] + 1;
    }

    cout << dp[N] << '\n';

    return 0;
}