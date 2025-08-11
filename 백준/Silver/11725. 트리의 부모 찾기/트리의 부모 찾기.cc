#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> graph(n + 1);
    vector<int> parent(n + 1, 0);

    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    queue<int> q;
    q.push(1);
    parent[1] = -1; 

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        for (int next : graph[cur])
        {
            if (parent[next] == 0)
            { 
                parent[next] = cur;
                q.push(next);
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        cout << parent[i] << '\n';
    }

    return 0;
}
