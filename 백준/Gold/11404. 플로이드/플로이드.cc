#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int INF = 2147483647;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;

    cin >> n >> m;

    vector<vector<int>> graph = vector<vector<int>>(n + 1, vector<int>(n + 1, INF));

    int a, b, c;

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> c;
        graph[a][b] = min(c, graph[a][b]);
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if(graph[i][k] != INF && graph[k][j] != INF)
                graph[i][j] = min(graph[i][k] + graph[k][j], graph[i][j]);
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        graph[i][i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (graph[i][j] == INF) cout << 0 << ' ';
            else cout << graph[i][j] << ' ';
        }
        cout << '\n';
    }
}
