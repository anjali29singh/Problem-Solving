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

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    if (n % 2 == 0)
    {
        // n is even hence two middle values at position k , k-1  for zero base indexing

        ll optn1 = 0, optn2 = 0, k = n / 2;

        for (int i = 0; i < n; i++)
        {
            optn1 = optn1 + abs(arr[i] - arr[k - 1]);
            optn2 = optn2 + abs(arr[i] - arr[k]);
        }
        cout << min(optn1, optn2) << '\n';
    }
    else
    {
        ll optn = 0, k = n / 2;
        for (int i = 0; i < n; i++)
            optn = optn + abs(arr[i] - arr[k]);
        cout << optn << '\n';
    }

    return 0;
}