#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	while (true)
	{
		int n;
		cin >> n;
		if (n == 0) break;

		string input;
		cin >> input;

		int roop = input.size() / n;
		vector<vector<char>> cut(roop, vector<char>(n));

		int idx = 0;
		for (int i = 0; i < roop; i++)
		{
			if (i % 2 == 0)
			{
				for (int j = 0; j < n; j++)
				{
					cut[i][j] = input[idx++];
				}
			}
			else
			{
				for (int j = n - 1; j >= 0; j--)
				{
					cut[i][j] = input[idx++];
				}
			}
		}

		string answer;
		for (int col = 0; col < n; col++)
		{
			for (int row = 0; row < roop; row++)
			{
				answer += cut[row][col];
			}
		}

		cout << answer << '\n';
	}
}
