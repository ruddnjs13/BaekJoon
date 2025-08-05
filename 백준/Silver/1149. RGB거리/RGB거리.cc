#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;

    cin >> n;

    vector<vector<int>> v(n,vector<int>(3, 0));
    vector<tuple<int, int, int>> dp(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> v[i][j];
        }
    }

    dp[0] = { v[0][0],v[0][1], v[0][2] };

    for (int i = 1; i < n; i++)
    {
        auto& [minR, minG, minB] = dp[i-1];
        int r, g, b;
        r = min((v[i][0] + minG), (v[i][0] + minB));
        g = min((v[i][1] + minR), (v[i][1] + minB));
        b = min((v[i][2] + minR), (v[i][2] + minG));

        dp[i] = { r,g,b };
    }
    
    auto& [r, g, b] = dp[n-1];
    cout << min(r, min(g, b));
}
