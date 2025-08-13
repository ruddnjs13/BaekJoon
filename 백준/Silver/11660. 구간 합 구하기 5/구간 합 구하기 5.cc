#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, inp;

    cin >> n >> m;

    vector<vector<int>> v(n+1,vector<int>(n+1));
    vector<vector<int>> dp(n+1, vector<int>(n+1));

    

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> v[i][j];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dp[i][j] = v[i][j] + dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
        }   
    }

    for (int i = 0; i < m; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int answer = dp[c][d] - dp[a - 1][d]- dp[c][b - 1] + dp[a - 1][b - 1];


        cout << answer  << '\n';
    }
    return 0;
}
