#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<long long> pre(n + 1);
    pre[1] = v[1];
    for (int i = 2; i <= n; i++) {
        pre[i] = pre[i - 1] + v[i];
    }
    vector<long long> sorted_v = v;
    sort(sorted_v.begin() + 1, sorted_v.begin() + n + 1);

    vector<long long> sorted_pre(n + 1);
    sorted_pre[1] = sorted_v[1];
    for (int i = 2; i <= n; i++) {
        sorted_pre[i] = sorted_pre[i - 1] + sorted_v[i];
    }

    int q;
    cin >> q;

    while (q--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
        {
            cout << pre[r] - (l == 1 ? 0 : pre[l - 1]) << "\n";
        }
        else if (type == 2)
        {
            cout << sorted_pre[r] - (l == 1 ? 0 : sorted_pre[l - 1]) << "\n";
        }
    }

    return 0;
}
