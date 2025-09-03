	#include <iostream>
	#include <queue>
	#include <vector>
	using namespace std;

	int n, m, maxVal;

	int dx[] = { 1,0,-1,0 };
	int dy[] = { 0,1,0,-1 };

	vector<vector<char>> pan;
	vector<bool> isVisited;

	void FindGrid(int x, int y, int cnt)
	{
		if (x < 0 || x >= n || y < 0 || y >= m)
			return;

		char current = pan[x][y];

		if (isVisited[current - 'A'])
			return;

		maxVal = max(maxVal, cnt);

		isVisited[current - 'A'] = true;


		for (int i = 0; i < 4; i++)
		{
			int nextX = x + dx[i];
			int nextY = y + dy[i];

			FindGrid(nextX,nextY, cnt + 1);
		}
		isVisited[current - 'A'] = false;
	}

	int main()
	{
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);

		cin >> n >> m;

		pan = vector(n, vector(m,' '));
		isVisited = vector(26, false);

		for (int i = 0; i < n; i++)
		{
			string s;

			cin >> s;

			for (int j = 0; j < m; j++)
			{
				pan[i][j] = s[j];
			}
		
		}

		FindGrid(0, 0, 1);

		cout << maxVal;
		return 0;
	}