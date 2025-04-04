#include <iostream>
#include <vector>
using namespace std;

void search(vector<vector<int>> &dp, int x, int y) {
    if (dp[x][y] <= 0)
        return;
    dp[x][y] = 0;
    search(dp, x , y - 1);
    search(dp, x, y + 1);
    search(dp, x + 1, y);
    search(dp, x - 1, y);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, m, n, k, inp1, inp2, cnt=0;
    cin >> t;

    vector<vector<int>> dp(52, vector<int>(52, 0));

    for (int i = 0; i < t; i++) {
        cnt = 0;
        cin >> m >> n >> k;
        for (int j = 0; j < k; j++) {
            cin >> inp1 >> inp2;
            dp[inp1 + 1][inp2 + 1] = 1; 
        }

        for (int i = 1; i <= 50; i++) {
            for (int j = 1; j <= 50; j++) {
                if (dp[i][j] >= 1) {
                    cnt++;
                    search(dp, i, j);
                }
            }
        }

        cout << cnt << '\n';
    }
   
    return 0;
}