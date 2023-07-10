#include <bits/stdc++.h>

using namespace std;

int N, k, l, ans;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, k, l, ans;
    cin >> N;
    map<int, int> mp;

    l = 1;
    for (int r = 1; r <= N; r++)
    {
        cin >> k;
        if (mp[k])
        {
            ans = max(ans, r - l);
            l = max(l, mp[k] + 1);
            mp[k] = r;
        }
        else
        {
            ans = max(ans, r - l + 1);
            mp[k] = r;
        }
    }

    ans = max(N - l + 1, ans);
    cout << ans << '\n';
}