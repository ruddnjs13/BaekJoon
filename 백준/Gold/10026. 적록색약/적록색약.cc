#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int dx[4] = { 1,0,-1,0 };
	int dy[4] = { 0,1,0,-1 };

	int n, answer = 0;

	cin >> n;

	vector<vector<char>> v (n,vector<char>(n, '0'));
	vector<vector<bool>> visited (n,vector<bool>(n, false));

	string input;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		for (int j = 0; j < n; j++)
		{
			v[i][j] = input[j];
		}
	}

	queue<pair<int, int>> q;


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (visited[i][j])continue;

			q.push({ i,j });
			answer++;

			while (q.empty() == false)
			{
				pair<int, int> node = q.front();

				q.pop();

				for (int l = 0; l < 4; l++)
				{
					int x, y;
					x = node.second + dx[l];
					y = node.first + dy[l];

					if (x < 0 || x > n - 1 || y < 0 || y > n - 1) continue;
					if (v[y][x] != v[i][j] || visited[y][x]) continue;

					q.push({ y,x });
					visited[y][x] = true;
				}
			}
		}
	}

	cout << answer << '\n';


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (v[i][j] == 'G')
				v[i][j] = 'R';
		}
	}
	answer = 0;
	visited = vector(n, vector<bool>(n, false));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (visited[i][j])continue;

			q.push({ i,j });
			answer++;

			while (q.empty() == false)
			{
				pair<int, int> node = q.front();

				q.pop();

				for (int l = 0; l < 4; l++)
				{
					int x, y;
					x = node.second + dx[l];
					y = node.first + dy[l];

					if (x < 0 || x > n - 1 || y < 0 || y > n - 1) continue;
					if (v[y][x] != v[i][j] || visited[y][x]) continue;

					q.push({ y,x });
					visited[y][x] = true;
				}
			}
		}
	}
	cout << answer;

}