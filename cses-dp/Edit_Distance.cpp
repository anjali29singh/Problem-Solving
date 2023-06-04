#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;

    int l1 = s1.length(), l2 = s2.length();

    int dp[l1 + 1][l2 + 1];

    for (int i = 0; i <= l1; i++)
    {
        for (int j = 0; j <= l2; j++)
        {
            if (i == 0)
                dp[i][j] = j; // to convert string of length 0 to n length string n edits
            else if (j == 0)
            {
                dp[i][j] = i;
            }
            else if (s1[i - 1] == s2[j - 1])
            {
                // if character matches then edits= edits without this character
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = 1 + min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
            }
        }
    }

    cout << dp[l1][l2] << '\n';

    return 0;
}