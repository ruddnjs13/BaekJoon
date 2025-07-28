#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    int n, m, a, b;

    int board[101] = { 0 };
    bool visited[101] = { 0 };

    cin >> n >> m;
    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++)
    {
        cin >>a >> b;
        board[a] = b; 
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        board[a] = b;
    }

    q.push({1,0});

    while (!q.empty())
    {
        pair<int, int> current;

        current = q.front();

        q.pop();

        if (current.first == 100)
        {
            cout << current.second;
            break;
        }

        for (int i = 1; i <= 6; i++)
        {
            int x = current.first + i;
            if (x <= 100)
            {
                while (board[x] != 0)
                { 
                    x = board[x];
                }
                if (!visited[x])
                {
                    q.push({ x, current.second + 1 });
                    visited[x] = true;
                }

            }
        }
    }
}
