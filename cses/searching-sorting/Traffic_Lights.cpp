#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, n;
    cin >> x >> n;

    set<int> positions;
    multiset<int> length;

    positions.insert(0);
    positions.insert(x);
    length.insert(x);

    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        positions.insert(p);
        auto it = positions.find(p);
        int previousValue = *prev(it), nextValue = *next(it);

        length.erase(length.find(nextValue - previousValue));
        length.insert(p - previousValue);
        length.insert(nextValue - p);

        auto ans = length.rbegin();
        cout << *ans << " ";
    }
    cout << '\n';
    return 0;
}