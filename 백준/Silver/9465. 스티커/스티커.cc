#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <tuple>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t, n;
    
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        vector<vector<int>> v(2, vector<int>(n, 0));
        vector<vector<int>> dp(2, vector<int>(n, 0));

        for (int j = 0; j < n; j++)
        {
            cin >> v[0][j];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> v[1][j];
        }

        dp[0][0] = v[0][0];
        dp[1][0] = v[1][0];
        dp[0][1] = v[0][1] + dp[1][0];
        dp[1][1] = v[1][1] + dp[0][0];

        for (int j = 2; j < n; j++)
        {
            dp[0][j] = max(dp[0][j - 2] + v[0][j], dp[1][j - 2] + v[0][j]);
            dp[0][j] = max(dp[0][j], dp[1][j - 1] + v[0][j]);

            dp[1][j] = max(dp[0][j - 2] + v[1][j], dp[1][j - 2] + v[1][j]);
            dp[1][j] = max(dp[1][j], dp[0][j - 1] + v[1][j]);
        }

        cout << max(dp[0][n - 1], dp[1][n - 1]) << '\n';
    }
    return 0;
}
