#include <bits/stdc++.h>
using namespace std;

int main()
{

    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b < c || d < a)
    {
        cout << d + b - (a + c) << '\n';
    }
    else
    {
        cout << max(b, d) - min(a, c) << '\n';
    }
    return 0;
}