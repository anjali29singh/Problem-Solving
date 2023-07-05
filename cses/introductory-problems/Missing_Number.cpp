#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n + 1] = {0};

    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        arr[x] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << '\n';
            break;
        }
    }
    return 0;
}