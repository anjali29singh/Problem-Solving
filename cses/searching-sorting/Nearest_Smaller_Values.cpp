#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e9;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    int arr[N];
    stack<int> st;
    st.push(0);
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i - 1];

        while (st.top() != 0 && arr[st.top() - 1] >= arr[i - 1])
        {

            st.pop();
        }
        cout << st.top() << " ";
        st.push(i);
    }
    cout << '\n';
    return 0;
}