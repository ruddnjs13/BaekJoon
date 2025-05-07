#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int M, N;
int box[1000][1000];
int dy[6] = { 1, -1, 0, 0};
int dx[6] = { 0, 0, 1, -1};

struct Vec3
{
    int x, y;
};


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> M >> N;

    queue<Vec3> q;
    int total = 0, count = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> box[i][j];
            if (box[i][j] != -1) total++;
            if (box[i][j] == 1)
            {
                q.push({ j, i});
                box[i][j] = 1;
                count++;
            }
        }
    }

    int day = -1;

    while (!q.empty())
    {
        int qSize = q.size();
        day++;

        for (int i = 0; i < qSize; i++)
        {
            Vec3 cur = q.front();
            q.pop();

            for (int i = 0; i < 6; i++)
            {
                int ny = cur.y + dy[i];
                int nx = cur.x + dx[i];

                if (ny < 0 || ny >= N || nx < 0 || nx >= M)
                    continue;
                
                if (box[ny][nx] == 0)
                {
                    box[ny][nx] = 1;
                    count++;
                    q.push({ nx, ny});
                }
            }
        }
    }

    if (count == total)
        cout << day << '\n';
    else
        cout << -1 << '\n';

    return 0;
}
