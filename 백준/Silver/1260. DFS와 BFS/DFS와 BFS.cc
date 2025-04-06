#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void dfs(vector<vector<int>>& graph, vector<bool>& isVisited, int current);
void bfs(vector<vector<int>>& graph, vector<bool>& isVisited, int start);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, v, m, inp1, inp2;
    cin >> n >> m >> v;
    vector<vector<int>> graph(n+1, vector<int>(n+1, 0));
    vector<bool> isVisited(n+1,false);

    for (int i = 0; i < m; i++) 
    {
        cin >> inp1>> inp2;
        graph[inp1][inp2] = 1;
        graph[inp2][inp1] = 1;
    }

   isVisited[v] = true;

    cout << v << ' ';

    dfs(graph, isVisited, v);

    for (int i = 1; i <= n; i++) {
        isVisited[i] = false;
    }

    cout << '\n';

    bfs(graph, isVisited, v);

    return 0;
}

void dfs(vector<vector<int>>& graph, vector<bool>& isVisited, int current) 
{
    for (int i = 1; i <= isVisited.size() - 1; i++) 
    {
        if (graph[current][i] > 0) 
        {
            if (isVisited[i] == false) 
            {
                cout << i << ' ';
                isVisited[i] = true;

                dfs(graph, isVisited, i);
            }
        }
    }
}

void bfs(vector<vector<int>>& graph, vector<bool>& isVisited, int start)
{
    queue<int> q;
    q.push(start);
    isVisited[start] = true;
    cout << start << ' ';

    while (q.empty() == false) 
    {
        int node = q.front();
        q.pop();
        for (int i = 1; i < isVisited.size(); i++) 
        {
            if (isVisited[i] == false) 
            {
                if (graph[node][i] > 0) 
                {
                    cout << i << ' ';
                    q.push(i);
                    isVisited[i] = true;
                }
            }
        }
    }
}
