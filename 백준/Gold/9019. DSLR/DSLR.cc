#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int D(int n)
{
    return (2 * n) % 10000;
}

int S(int n)
{
    return (n == 0) ? 9999 : n - 1;
}

int L(int n)
{
    return (n % 1000) * 10 + (n / 1000);
}

int R(int n)
{
    return (n % 10) * 1000 + (n / 10);
}

int main()
{
    int t; cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        vector<bool> visited(10000, false);
        queue<pair<int, string>> q;

        q.push({ a, "" });
        visited[a] = true;

        while (!q.empty())
        {
            auto [cur, cmd] = q.front(); q.pop();

            if (cur == b)
            {
                cout << cmd << '\n';
                break;
            }

            int d = D(cur);
            if (!visited[d])
            {
                visited[d] = true;
                q.push({ d, cmd + 'D' });
            }

            int s = S(cur);
            if (!visited[s])
            {
                visited[s] = true;
                q.push({ s, cmd + 'S' });
            }

            int l = L(cur);
            if (!visited[l])
            {
                visited[l] = true;
                q.push({ l, cmd + 'L' });
            }

            int r = R(cur);
            if (!visited[r])
            {
                visited[r] = true;
                q.push({ r, cmd + 'R' });
            }
        }
    }
}
