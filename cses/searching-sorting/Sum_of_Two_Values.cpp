#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll n, sum;
    vector<pair<ll, ll>> arr;
    cin >> n >> sum;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        arr.push_back(make_pair(x, i + 1));
    }

    sort(arr.begin(), arr.end());

    bool possible = false;
    int ind1 = -1, ind2 = -1;

    for (int i = 0; i < n; i++)
    {
        int l = 0, r = n;

        // num to be find
        long long k = sum - arr[i].first;

        while (l + 1 < r && k > 0)
        {
            int mid = (l + r) / 2;

            if (arr[mid].first < k)
            {
                l = mid;
            }
            else if (arr[mid].first == k && arr[mid].second != arr[i].second)
            {
                possible = true;
                ind1 = arr[i].second;
                ind2 = arr[mid].second;
                break;
            }
            else
            {
                r = mid;
            }
        }

        if (possible)
            break;
    }
    if (possible)
        cout << ind1 << " " << ind2 << '\n';
    else
        cout << "IMPOSSIBLE" << '\n';

    return 0;
}