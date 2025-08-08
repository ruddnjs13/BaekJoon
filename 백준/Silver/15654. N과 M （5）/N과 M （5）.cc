#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> v;
vector<int> temp;
vector<bool> visited;

void dfs(int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << temp[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            temp[cnt] = v[i];
            dfs(cnt + 1);
            visited[i] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    v.resize(n);
    temp.resize(m);
    visited.resize(n, false);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    dfs(0);

    return 0;
}
