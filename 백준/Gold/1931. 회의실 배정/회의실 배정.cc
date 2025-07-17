#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    else return a.second < b.second;
}

int main()
{
    int n, a, b;

    cin >> n;

    vector<pair<int,int>> v = vector<pair<int,int>>(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v[i] = { a,b };
    }

    sort(v.begin(), v.end(),compare);

    int cnt = 1;
    pair<int, int> current = v[0];

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i].first >= current.second)
        {
            current = v[i];
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}
