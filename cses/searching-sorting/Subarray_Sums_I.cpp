#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll N, X;
    cin >> N >> X;

    ll arr[N + 1];
    arr[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        ll x;
        cin >> x;
        arr[i] = arr[i - 1] + x;
    }

    int cnt = 0;

    for (int i = 0; i <= N; i++)
    {

        ll k = X + arr[i];

        int l = i, r = N + 1;
        while (l + 1 < r && k > 0)
        {

            int mid = (l + r) / 2;

            if (arr[mid] == k)
            {
                cnt = cnt + 1;

                break;
            }
            else if (arr[mid] > k)

                r = mid;

            else
                l = mid;
        }
    }

    cout << cnt << '\n';

    return 0;
}