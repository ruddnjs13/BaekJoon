#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;

int n, m;

vector<int> v;
vector<int> temp;
vector<bool> visited;

void f(int cnt)
{
    if(cnt == m)
    {
        for (auto i : temp)
            cout << i << ' ';
        cout << '\n';
        return;
    }

    int prev = -1;

    for (int i = 0; i < v.size() ;i++)
    {
        if (visited[i] || prev == v[i])
            continue;
        visited[i] = true;
        temp[cnt] = v[i];
        f(cnt + 1);
        visited[i] = false;

        prev = v[i];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    v.resize(n);
    temp.resize(m);
    visited.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    f(0);

    return 0;
}