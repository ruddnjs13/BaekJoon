#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int n, k;

    cin >> n >> k;

    vector<pair<int, int>> items(n);

    for (int i = 0; i < n; i++)
    {
        cin >> items[i].first >> items[i].second;
    }

    vector<int> dp(k + 1, 0);

    for (auto [weight, value] : items)
    {
        for (int i = k; i >= weight;i--)
        {
            dp[i] = max(dp[i], dp[i - weight] + value);
        }
    }

    cout << dp[k] << '\n';
    
}
