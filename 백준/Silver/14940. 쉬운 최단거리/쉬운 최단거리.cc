#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int main()
{
    int dx[4] = { 0,1,0,-1 };
    int dy[4] = { 1,0,-1,0 };

    int n, m;
    pair<int, int> start;

    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m,0));
    vector<vector<bool>> visited(n, vector<bool>(m,false));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];

            if (v[i][j] == 2)
                start = { i,j };
        }
    }

    queue<pair<int, int>> q;

    q.push(start);
    visited[start.first][start.second] = true;
    v[start.first][start.second] = 0;
    

    int cnt = 0;

    while (q.empty() == false)
    {
        int qSize = q.size();

        cnt++;
        for (int i = 0; i < qSize; i++)
        {
            pair<int,int> node = q.front();
            q.pop();


            for (int j = 0; j < 4; j++)
            {
                int x, y;

                x = node.second + dx[j];
                y = node.first + dy[j];

                if (x < 0 || x > m-1  || y < 0 || y  > n-1) continue;
                if (v[y][x] == 0 || visited[y][x]) continue;
                q.push({ y,x });
                visited[y][x] = true;
                v[y][x] = cnt;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (visited[i][j] == false && v[i][j] == 1)
            {
                v[i][j] = -1;
            }
        }
    }



    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
