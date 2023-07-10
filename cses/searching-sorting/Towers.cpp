#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    multiset<ll> set;
    for (int i = 0; i < N; i++)
    {
        ll x;
        cin >> x;
        auto it = set.upper_bound(x);

        if (it == set.end())
        {

            set.insert(x);
        }
        else
        {
            set.erase(it);
            set.insert(x);
        }
    }
    cout << set.size() << '\n';

    return 0;
}