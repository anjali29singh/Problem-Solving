#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;

    ll arr[n];
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    sort(arr, arr + n);
    ll ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > ans)
        {
            break;
        }
        ans = ans + arr[i];
    }

    cout << ans << '\n';
    return 0;
}