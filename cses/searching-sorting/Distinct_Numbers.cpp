#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    long long arr[N];
    set<long long> diff;
    for (int i = 0; i < N; i++)
    {

        cin >> arr[i];
        diff.insert(arr[i]);
    }
    cout << diff.size() << '\n';

    return 0;
}