#include <iostream>
using namespace std;

int facto(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, m, t, result;

    cin >> t;

    for (int i = 0; i < t; i++) {
        result = 1;
        cin >> n >> m;
        for (int j = 0; j < n; j++) {
            result *= (m - j);
            result /= j + 1;
        }
        cout << result << '\n';
    }
}