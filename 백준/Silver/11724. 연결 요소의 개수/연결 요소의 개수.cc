#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, day=0;
    cin >> n >> m;

    vector<vector<int>> graph(n, vector<int>());
    vector<bool> isVisited(n, false);

    for (int i = 0; i < m; i++)
    {
        int inp1, inp2;

        cin >> inp1 >> inp2;

        graph[inp1 - 1].push_back(inp2 - 1);
        graph[inp2 - 1].push_back(inp1 - 1);
    }
   
    for (int i = 0; i < n; i++)
    {
        queue<int> q;

        if (isVisited[i]) continue;
        q.push(i);
        isVisited[i] = true;

        day++;
        
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            for (int j = 0; j < graph[node].size(); j++)
            {
                if (isVisited[graph[node][j]])
                    continue;
                isVisited[graph[node][j]] = true;
                q.push(graph[node][j]);
            }
        }
    }

    cout << day;

    return 0;
}
