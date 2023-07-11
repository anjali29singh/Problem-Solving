#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    multiset<pair<int, int>> range;
    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        range.insert(make_pair(x, y));
    }

    for (auto i : range)
    {
        cout << i.first << " " << i.second << '\n';
    }
    return 0;
}