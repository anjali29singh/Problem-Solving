#include <bits/stdc++.h>
using namespace std;

struct rectangle
{

    int x1, y1, x2, y2;
    int area()
    {
        return (y2 - y1) * (x2 - x1);
    }
};

int intersect(rectangle p, rectangle q)
{

    int xoverlap = max(0, min(p.x2, q.x2) - max(p.x1, q.x1));
    int yoverlap = max(0, min(p.y2, q.y2) - max(p.y1, q.y1));
    return xoverlap * yoverlap;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);
    rectangle a, b, t;
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
    cin >> t.x1 >> t.y1 >> t.x2 >> t.y2;

    int ans = (a.area() + b.area()) - (intersect(a, t) + intersect(b, t));
    cout << ans << '\n';
    return 0;
}