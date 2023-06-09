#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll N, X, prev = 0;
    cin >> N >> X;

    map<ll, int> freq;
    ll cnt = 0;

    freq[0] = 1;
    for (int i = 0; i < N; i++)
    {
        ll k;
        cin >> k;
        prev = prev + k;
        cnt = cnt + freq[prev - X];
        freq[prev]++;
    }
    cout << cnt << '\n';

    return 0;
}