#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int intMax = int(1e9);
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int W, H, w, h;
        cin >> W >> H;
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2 >> w >> h;

        int ans = intMax;
        if ((x2 - x1) + w <= W)
        {
            ans = min(ans, min(max(0, w - x1), max(0, x2 - (W - w))));
        }
        if ((y2 - y1) + h <= H)

        {

            ans = min(ans, min(max(0, h - y1), max(0, y2 - (H - h))));
        }

        cout << fixed << setprecision(9);
        if (ans == intMax)
            cout << -1 << '\n';
        else
            cout << double(ans) << '\n';
    }
    return 0;
}