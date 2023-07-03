#include <bits/stdc++.h>
using namespace std;

struct rectangle
{
    int x1, y1, x2, y2;
};

int minArea(rectangle a, rectangle b)
{

    int x = max(0, max(a.x2, b.x2) - min(a.x1, b.x1));
    int y = max(0, max(a.y2, b.y2) - min(a.y1, b.y1));
    int area = max(x, y) * max(x, y);
    return area;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);
    rectangle a, b;
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
    cout << minArea(a, b) << '\n';
    return 0;
}