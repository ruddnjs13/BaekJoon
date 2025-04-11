#include<iostream>
#include<vector>
using namespace std;

void checkStar(int n, int idx1, int idx2, vector<vector<int>> & checkList)
{
	int next = n / 3;
	if (n == 1)
	{
		checkList[idx1+1][idx2+1] = 1;
		return;
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 1 && j == 1)
					continue;
				int nextIdx1 = idx1 + next * j;
				int nextIdx2 = idx2 +next * i;
				checkStar(next, nextIdx1, nextIdx2, checkList);
			}
		}
	}
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector < vector<int>> checkList(n+1, vector<int>(n+1, 0));


	checkStar(n,0,0, checkList);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (checkList[i][j] > 0)
				cout << '*';
			else
				cout << ' ';
		}
		cout << '\n';
	}
	
	return 0;
}