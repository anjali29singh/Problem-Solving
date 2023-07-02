#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    vector<vector<int>> vec(n);

    for (int i = 0; i < n; i++)
    {

        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '#')
                vec[i].push_back(-1);
            else if (s[j] == '.')
                vec[i].push_back(1);
            else if (s[j] == 'A')
                vec[i].push_back(1);
            else
                vec[i].push_back(0);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << vec[i][j];
        cout << '\n';
    }
    return 0;
}