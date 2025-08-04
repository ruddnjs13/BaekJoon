#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;

int temp[10];

void dfs(int cur, int cnt)
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
	for (int i = cur; i <= n; i++)
	{
		temp[cnt] = i;
		dfs(i, cnt+1);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n >> m;

	dfs(1,0);
}
