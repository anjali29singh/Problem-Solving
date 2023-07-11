#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int arr[N];
    long long sum = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    for (int i = 0; i < N - 1; i++)
    {
        sum = sum + arr[i];
    }

    long long ans = 0;
    if (sum <= arr[N - 1])
    {
        ans = 2 * arr[N - 1];
    }
    else
    {
        ans = sum + arr[N - 1];
    }
    cout << ans << '\n';
    return 0;
}