#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int M, N, H;
int box[100][100][100];
int dz[6] = { 0, 0, 0, 0, 1, -1 };
int dy[6] = { 1, -1, 0, 0, 0, 0 };
int dx[6] = { 0, 0, 1, -1, 0, 0 };

struct Vec3
{
    int x, y, z;
};


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> M >> N >> H;

    queue<Vec3> q;
    int total = 0, count = 0;

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < M; k++)
            {
                cin >> box[i][j][k];
                if (box[i][j][k] != -1) total++;
                if (box[i][j][k] == 1)
                {
                    q.push({ k, j, i });
                    box[i][j][k] = 1;
                    count++;
                }
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
                int nz = cur.z + dz[i];
                int ny = cur.y + dy[i];
                int nx = cur.x + dx[i];

                if (nz < 0 || nz >= H || ny < 0 || ny >= N || nx < 0 || nx >= M)
                    continue;
                
                if (box[nz][ny][nx] == 0)
                {
                    box[nz][ny][nx] = 1;
                    count++;
                    q.push({ nx, ny, nz });
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