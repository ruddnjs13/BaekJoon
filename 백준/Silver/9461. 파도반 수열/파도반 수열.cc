#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n;
    cin >> t;

    long long dp[101] = {0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9,};

    for (int i = 11; i <= 100; i++) {
        dp[i] = ((dp[i-1] + dp[i - 5]));
    }

    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << dp[n] << '\n';
    }
}