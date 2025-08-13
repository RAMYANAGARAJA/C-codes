#include<iostream>
#include<vector>
using namespace std;

int main() {
    long long n, k, q;
    cin >> n >> k >> q;
    vector<long long> range(200005, 0);
    for (int i = 0; i < n; ++i) {
        long long l, r;
        cin >> l >> r;
        range[l]++;
        range[r + 1]--;
    }

    for (int i = 1; i < 200005; ++i) {
        range[i] += range[i - 1];
    }
    vector<long long> admissible(200005, 0);
    for (int i = 1; i < 200005; ++i) {
        if (range[i] >= k) {
            admissible[i] = 1;
        }
    }
    for (int i = 1; i < 200005; ++i) {
        admissible[i] += admissible[i - 1];
    }
    for (int i = 0; i < q; ++i) {
        long long a, b;
        cin >> a >> b;
        cout << admissible[b] - admissible[a - 1] << endl;
    }

    return 0;
}
