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

    string str1, str2;

    cin >> str1 >> str2;

    vector<vector<int>> dp(str1.size()+1, vector<int>(str2.size()+1,0));

    for (int i = 1; i <= str1.length(); i++)
    {
        for (int j = 1; j <= str2.length(); j++)
        {
            if (str1[i-1] == str2[j-1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
    }

    cout << dp[str1.length()][str2.length()];
    return 0;
}
