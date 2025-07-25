#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> tree;
int n, m, root, input, cnt = 0;

void dfs(int node)
{
	bool isLeaf = true;

	for (auto i : tree[node])
	{
		if (i == m)continue;
		else
		{
			dfs(i);
			isLeaf = false;
		}
	}

	if (isLeaf)
	{
		cnt++;
		return;
	}
}

int main()
{
	cin >> n;

	tree.resize(n);

	for (int i = 0; i < n; i++)
	{
		cin >> input;

		if (input == -1)
		{
			root = i;
			continue;
		}

		tree[input].push_back(i);
	}

	cin >> m;

	if (root == m)
	{
		cout << 0;
	}
	else
	{
		dfs(root);
		cout << cnt;
	}
}
