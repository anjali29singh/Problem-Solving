#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    ll sum = (n * (n + 1)) / 2;
    if (n < 3 || sum % 2 != 0)
        cout << "NO" << '\n';
    else
    {

        sum = sum / 2;
        int arr[n + 1] = {0};
        ll cnt = n, len1 = 0;
        while (sum != 0)
        {

            sum = sum - cnt;
            if (sum >= 0)
            {
                arr[cnt] = 1;
                cnt = cnt - 1;
                len1++;
            }
            else
            {
                arr[sum + cnt] = 1;
                len1++;
                break;
            }
        }
        cout << "YES" << '\n';
        cout << len1 << '\n';

        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == 1)
                cout << i << " ";
        }
        cout << '\n'
             << n - len1 << '\n';

        for (int i = 1; i <= n; i++)
        {
            if (arr[i] != 1)
                cout << i << " ";
        }
        cout << '\n';
    }

    return 0;
}