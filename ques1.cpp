#include <iostream>
#include <vector>
using namespace std;

void solve(int l, int r, const vector<long long>& pre) {
    cout << pre[r - 1] - ((l == 1) ? 0 : pre[l - 2]) << " ";
}

int main() {
    int n, q;
    cin >> n >> q;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<long long> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + v[i];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        solve(l, r, pre);
    }

    return 0;
}
