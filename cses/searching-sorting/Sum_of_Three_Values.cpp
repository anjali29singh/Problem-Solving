#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, X;
    cin >> N >> X;

    vector<pair<ll, int>> vec(N);
    for (int i = 0; i < N; i++)
    {
        cin >> vec[i].first;
        vec[i].second = i + 1;
    }
    sort(vec.begin(), vec.end());

    if (X < vec[0].first + vec[1].first + vec[2].first || X > vec[N - 1].first + vec[N - 2].first + vec[N - 3].first)
    {
        cout << "IMPOSSIBLE" << '\n';
    }
    else
    {

        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1, k = N - 1; j < k; j++)
            {
                ll x2 = X - (vec[i].first + vec[j].first);

                while (x2 < vec[k].first)
                {
                    k = k - 1;
                }
                if (j < k && vec[j].first + vec[k].first + vec[i].first == X)
                {
                    cout << vec[i].second << " " << vec[j].second << " " << vec[k].second << '\n';
                    return 0;
                }
            }
        }
    }
}