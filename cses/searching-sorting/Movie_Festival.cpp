#include <bits/stdc++.h>
using namespace std;
#define ll long long
// task scheduling problem
bool compareSecond(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second < b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<pair<int, int>> vec;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        vec.push_back(make_pair(a, b));
    }

    int cnt = 0, lmft = -1;
    sort(vec.begin(), vec.end(), compareSecond);

    for (auto i : vec)
    {
        if (i.first >= lmft)
        {
            cnt++;
            lmft = i.second;
        }
    }

    cout << cnt << '\n';

    return 0;
}