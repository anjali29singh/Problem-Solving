#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    ll arr[n];
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            ans = ans + (arr[i - 1] - arr[i]);
            arr[i] = arr[i - 1];
        }
    }
    cout << ans << '\n';
}