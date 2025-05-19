#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int dy[6] = { 1, -1, 0, 0 };
int dx[6] = { 0, 0, 1, -1 };

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, answer = 0;
    cin >> n >> m;

    vector<vector<char>> graph(n, vector<char>(m));
    vector<vector<bool>> isVisited(n, vector<bool>(m));
    pair<int, int> start;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> graph[i][j];

            if (graph[i][j] == 'I')
                start = { i,j };
        }
    }

    isVisited[start.first][start.second] = true;

    queue<pair<int, int>> q;
    q.push(start);


    while (!q.empty())
    {
        pair<int, int> node = q.front();
        q.pop();

        if (graph[node.first][node.second] == 'P')
            answer++;
        if (graph[node.first][node.second] == 'X')
            continue;

        for (int i = 0; i < 4; i++)
        {
            int x = node.second + dx[i];
            int y = node.first + dy[i];

            if (x < 0 || x > m - 1 || y < 0 || y > n - 1)
                continue;
            if (isVisited[y][x])
                continue;
            q.push({ y,x });
            isVisited[y][x] = true;
        }
    }

    if (answer <= 0)
        cout << "TT";
    else
        cout << answer;
    return 0;
}
