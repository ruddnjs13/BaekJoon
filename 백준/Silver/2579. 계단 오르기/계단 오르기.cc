#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int stairs[301]{ 0, };

    int n;
    cin >> n;

    int dp[301]{ 0, };

    for (int i = 1; i <= n; i++)
        cin >> stairs[i];

    dp[1] = stairs[1];
    dp[2] = stairs[1] + stairs[2];
    dp[3] = max(stairs[1] + stairs[3], stairs[2] + stairs[3]);

    for (int i = 4; i <= n; i++) {
        dp[i] = max(stairs[i] + stairs[i-1] + dp[i-3], stairs[i] + dp[i-2]);
    }

    cout << dp[n];
}