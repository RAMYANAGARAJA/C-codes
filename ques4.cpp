#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;

    vector<long long> arr(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    vector<long long> range(n + 2, 0);
    while (q--) {
        int l, r;
        cin >> l >> r;
        range[l]++;
        range[r + 1]--;
    }

    vector<long long> freq(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        freq[i] = freq[i - 1] + range[i];
    }


    sort(arr.begin() + 1, arr.end(), greater<long long>());
    sort(freq.begin() + 1, freq.end(), greater<long long>());

    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += arr[i] * freq[i];
    }

    cout << sum << endl;
    return 0;
}
