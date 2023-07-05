#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;

    cin >> s;

    int arr[4];
    int ans = 0, cnt = 0;
    char c = s[0];
    for (auto i : s)
    {
        if (i == c)
        {
            cnt = cnt + 1;
        }
        else
        {
            ans = max(ans, cnt);
            cnt = 1;
            c = i;
        }
    }
    ans = max(ans, cnt);

    cout << ans << '\n';

    return 0;
}