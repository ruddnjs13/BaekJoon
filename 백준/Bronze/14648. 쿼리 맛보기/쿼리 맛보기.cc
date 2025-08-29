#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    long long a[1005], ps[1005] = {0};
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        ps[i] = ps[i - 1] + a[i];
    }
    while (q--) {
        int t, i, j;
        cin >> t >> i >> j;
        if (t == 1) {
            cout << ps[j] - ps[i - 1] << "\n";
            long long tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            for (int k = i; k <= n; k++) ps[k] = ps[k - 1] + a[k];
        } else {
            int k, l;
            cin >> k >> l;
            cout << (ps[j] - ps[i - 1]) - (ps[l] - ps[k - 1]) << "\n";
        }
    }
}
