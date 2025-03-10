#include <iostream>
#include <cmath>
using namespace std;

long long nums[501][502]{ 0, };
long long dp[501][502]{ 0, };

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, input, maxValue;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> input;
            nums[i][j] = input;
        }
    }

    dp[1][1] = nums[1][1];
    maxValue = dp[1][1];

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            dp[i][j] = max(dp[i - 1][j - 1] + nums[i][j], dp[i - 1][j] + nums[i][j]);
            if (dp[i][j] > maxValue)
                maxValue = dp[i][j];
        }
    }

    cout << maxValue;

}