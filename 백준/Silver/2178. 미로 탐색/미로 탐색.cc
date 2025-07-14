#include<iostream>
#include<vector>
#include<queue>
using namespace std;


int main()
{
	int dx[4] = { 0,1,0,-1 };
	int dy[4] = { 1,0,-1,0 };

	int n, m, qSize, answer = 0;

	cin >> n >> m;

	vector<vector<int>> miro(n, vector<int>(m, 0));

	string input;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		for (int j = 0; j < m; j++)
		{
			miro[i][j] = input[j]-'0';
		}
	}

	queue<pair<int,int>> q;

	vector<vector<bool>> isVisited(n, vector<bool>(m, false));

	q.push({ 0,0 });


	while (q.empty() == false)
	{
		qSize = q.size();
		answer++;

		for (int i = 0; i < qSize; i++)
		{
			pair<int, int> coord = q.front();
			q.pop();

			if (coord.first == m - 1 && coord.second == n - 1)
			{
				while (q.empty() == false)
					q.pop();
				cout << answer;
				break;
			}

			for (int j = 0; j < 4; j++)
			{
				int x, y;
				x = coord.first + dx[j];
				y = coord.second + dy[j];

				if (x < 0 || x > m - 1 || y < 0 || y > n - 1) continue;
				if (miro[y][x] == 0 || isVisited[y][x]) continue;

				q.push({ x,y });
				isVisited[y][x] = true;
			}
		}
	}
}