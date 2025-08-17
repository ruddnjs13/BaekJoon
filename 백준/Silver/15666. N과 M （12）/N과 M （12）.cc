#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;

int n, m, inp;

vector<int> v;
vector<int> temp;

void f(int cnt, int before)
{
    if (cnt == m)
    {
        for (auto i : temp)
            cout << i << ' ';
        cout << '\n';
        return;
    }

    for (int i = before; i < v.size(); i++)
    {
        temp[cnt] = v[i];
        f(cnt+1, i);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    set<int> s;
   
    cin >> n >> m;

    temp.resize(m);

    for (int i = 0; i < n; i++)
    {
        cin >> inp;

        s.insert(inp);
    }

    for (auto i : s)
    {
        v.push_back(i);
    }

    f(0, 0);

    return 0;
}
