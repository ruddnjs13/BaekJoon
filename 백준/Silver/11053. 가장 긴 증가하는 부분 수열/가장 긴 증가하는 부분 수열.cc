#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, maxVal = 0;

    cin >> n;

    vector<int> v(n+1);
    vector<int> dp(n+1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    dp[0] = 0;
    dp[1] = 1;


    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (v[j] < v[i])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    cout << *max_element(dp.begin(), dp.end());

    return 0;
}
