#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int dy[4] = { 1,0,-1,0 };
int dx[4] = { 0,1,0,-1 };

int n;
vector<vector<int>> v;

int dfs(int x, int y)
{
    v[y][x] = 0;
    int count = 1;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
        if (v[ny][nx] == 0) continue;

        count += dfs(nx, ny);
    }

    return count;
}

int main()
{
    cin >> n;
    v = vector<vector<int>>(n, vector<int>(n));

    string input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        for (int j = 0; j < n; j++)
        {
            v[i][j] = input[j] - '0';
        }
    }

    vector<int> answer;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] == 1)
            {
                answer.push_back(dfs(j, i));
            }
        }
    }

    sort(answer.begin(), answer.end());

    cout << answer.size() << '\n';
    for (int cnt : answer)
    {
        cout << cnt << '\n';
    }

    return 0;
}
