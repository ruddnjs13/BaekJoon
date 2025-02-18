#include <iostream>
using namespace std;

int dp[1000001] = { 0,0,1,1, };

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int x;
    
    cin >> x;

    for (int i = 4; i <= x; i++) {
        dp[i] = dp[i - 1] + 1;
        if (i % 3 == 0) dp[i] = dp[i / 3] < dp[i] ? dp[i / 3] + 1 : dp[i];
        if (i % 2 == 0) dp[i] = dp[i / 2] < dp[i] ? dp[i / 2] + 1 : dp[i];
    }

    cout << dp[x];
}