#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    long long q;
    cin >> n >> q;
    vector<vector<char>> v(n + 1, vector<char>(n + 1));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> v[i][j];
        }
    }
    vector<vector<int>> pre(n + 1, vector<int>(n + 1));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            pre[i][j] = (v[i][j] == '*') ? 1 : 0;

            pre[i][j] += pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1];
        }
    }

    while (q--)
    {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;

        int ans = pre[l2][r2] - pre[l1 - 1][r2] - pre[l2][r1 - 1] + pre[l1 - 1][r1 - 1];
        cout << ans << "\n";
    }

    return 0;
}
