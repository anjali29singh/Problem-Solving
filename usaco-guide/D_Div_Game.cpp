#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N;
    cin >> N;

    long ans = 0;
    for (long long i = 2; i * i <= N; i++)
    {
        int cnt = 0;
        while (N % i == 0)
        {
            N = N / i;

            cnt = cnt + 1;
        }
        for (int j = 1; (cnt - j) >= 0; j++)
        {
            ans++;
            cnt = cnt - j;
        }
    }
    if (N > 1)
        ans++;

    cout << ans << '\n';

    return 0;
}