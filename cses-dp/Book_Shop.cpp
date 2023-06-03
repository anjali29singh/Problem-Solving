#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, X;
    cin >> N >> X;
    int H[N], S[N]; // price of each book and pages in each book

    vector<pair<int, int>> vec;

    int dp[N + 1][X + 1];

    for (int i = 0; i < N; i++)
    {

        cin >> H[i];
    }

    for (int j = 0; j < N; j++)
        cin >> S[j];

    for (int i = 0; i < N; i++)
    {
        vec.push_back(make_pair(H[i], S[i]));
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i <= N; i++)
    {

        for (int j = 0; j <= X; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (vec[i - 1].first > j) // if(price of book > budget) , not purchase that book
                dp[i][j] = dp[i - 1][j];
            else
            {

                dp[i][j] = max(dp[i - 1][j], vec[i - 1].second + dp[i - 1][j - vec[i - 1].first]);
            }
        }
    }
    cout << dp[N][X] << '\n';
    return 0;
}