#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n, k;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;

        vector<int> inDegree(n+1, 0);
        vector<int> time(n+1, 0);
        vector<vector<int>> graph(n + 1);

        vector<int> dp(n + 1);

        for (int j =1; j <= n; j++)
        {
            cin >> time[j];
        }

        for (int j = 0; j < k; j++)
        {
            int a, b;

            cin >> a >> b;
            inDegree[b]++;
            graph[a].push_back(b);
        }

        queue<int> q;

        for (int i = 1; i < inDegree.size(); i++)
        {
            if (inDegree[i] == 0)
            {
                q.push(i);
                dp[i] = time[i];
            }
        }

        while (q.empty() == false)
        {
            int node = q.front();
            q.pop();

            for (auto next : graph[node])
            {
                inDegree[next]--;
                dp[next] = max(dp[next], dp[node] + time[next]);
                if (inDegree[next] == 0)
                {
                    q.push(next);
                }
            }
        }
        int w;
        cin >> w;
        cout << dp[w] << '\n';
    }
}
