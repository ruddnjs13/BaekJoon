#include <iostream>
#include <cmath>
using namespace std;

int dp[50001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    
    dp[1] = 1;
    for (int i = 1; i < sqrt(50000); i++) 
    {
        dp[i * i] = 1;
    }

    for (int i = 1; i <= n; i++) 
    {
        int minValue = 99999;
        if (dp[i] == 1) continue;
        for (int j = 1; j <= sqrt(i); j++) 
        {
            int temp = dp[j * j] + dp[i - j * j];
            if (temp < minValue)
            {
                minValue = temp;
                dp[i] = temp;
            }
        }
    }

    cout << dp[n];
    return 0;
}