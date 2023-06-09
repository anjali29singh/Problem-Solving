#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int mod(int x, int N)
{
    return (x % N + N) % N;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    ll a, cnt = 0, prev = 0;
    map<ll, int> freq;
    freq[0] = 1;
    for (int i = 0; i < N; i++)
    {
        ll x;
        cin >> x;
        prev = mod(prev + x, N);
        cnt += freq[prev];
        freq[prev]++;
    }
    cout << cnt << '\n';
}