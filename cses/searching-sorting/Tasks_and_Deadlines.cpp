#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<pair<int, int>> task;

    for (int i = 0; i < N; i++)
    {
        int a, d;
        cin >> a >> d;
        task.push_back(make_pair(a, d));
    }
    sort(task.begin(), task.end());

    long long reward = 0,
              prevfinish = 0;

    for (auto i : task)
    {
        reward = reward + i.second - (prevfinish + i.first);
        prevfinish = i.first + prevfinish;
    }

    cout << reward << '\n';

    return 0;
}
