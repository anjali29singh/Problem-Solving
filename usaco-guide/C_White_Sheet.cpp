#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct rectangle
{

    int x1, y1, x2, y2;
    ll area()
    {
        return (ll)(x2 - x1) * (y2 - y1);
    }
};
ll intersect(rectangle a, rectangle b)
{

    int xoverlap = max(0, min(a.x2, b.x2) - max(a.x1, b.x1));
    int yoverlap = max(0, min(a.y2, b.y2) - max(a.y1, b.y1));
    return (ll)xoverlap * yoverlap;
}
ll intersect_all(rectangle w, rectangle a, rectangle b)
{

    int xoverlap = max(0, min(b.x2, min(w.x2, a.x2)) - max(max(w.x1, a.x1), b.x1));
    int yoverlap = max(0, min(min(w.y2, a.y2), b.y2) - max(max(w.y1, a.y1), b.y1));
    return (ll)xoverlap * yoverlap;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    rectangle w, a, b;
    cin >> w.x1 >> w.y1 >> w.x2 >> w.y2;
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;

    ll is_poss = w.area() - (intersect(w, a) + intersect(w, b) - (intersect_all(w, a, b)));
    if (is_poss != 0)
    {
        cout << "YES" << '\n';
    }
    else
        cout << "NO" << '\n';
    return 0;
}