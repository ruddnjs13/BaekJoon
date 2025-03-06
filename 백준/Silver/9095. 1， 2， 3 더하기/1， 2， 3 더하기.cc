#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int dp[12];
    int n, x;
    cin >> n;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 4; i <= 11; i++) {
        dp[i] = dp[i - 1] + dp[i-2] + dp[i-3];
    }
    for (int i = 0; i < n; i++) {
        cin >> x;
        cout << dp[x]<< '\n';
    }
}