#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, c;
    cin >> r >> c;

    vector<vector<int>> v(r, vector<int>(c));
    vector<vector<int>> left_dp(r, vector<int>(c, 0));   // ↙ 대각선
    vector<vector<int>> right_dp(r, vector<int>(c, 0));  // ↘ 대각선

    for (int i = 0; i < r; i++)
    {
        string input;
        cin >> input;
        for (int j = 0; j < c; j++)
        {
            v[i][j] = input[j] - '0';
        }
    }

    for (int i = r-1; i >=0; i--)
    {
        for (int j = c-1; j >=0; j--)
        {
            if (v[i][j] == 0) continue;


            if (i + 1 < r && j - 1 >= 0) left_dp[i][j] = left_dp[i + 1][j - 1] + 1;
            else                           
                left_dp[i][j] = 1;

            if (i + 1 < r && j + 1 < c)   
                right_dp[i][j] = right_dp[i + 1][j + 1] + 1;
            else   
                right_dp[i][j] = 1;
        }
    }

    int answer = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (v[i][j] == 0) continue;
            
            int size = min(left_dp[i][j], right_dp[i][j]);

            for (int k = size; k > 0; k--)
            {
                int x1, x2, y;

                x1 = j - (k - 1);
                x2 = j + (k - 1);
                y = i + (k - 1);

                if (x1 < 0 || x2 >= c|| y >= r) continue;

                if (right_dp[y][x1] >= k && left_dp[y][x2] >= k)
                {
                   
                    answer = max(answer, k);
                    break;
                }
            }
        }
    }
    cout << answer;
    return 0;
}
