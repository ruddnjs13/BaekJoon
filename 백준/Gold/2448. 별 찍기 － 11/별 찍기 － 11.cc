#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<vector<char>> v;

/*

*/

void f(int size, int x, int y)
{
	if (size == 3)
	{
		v[x][y] = '*';

		v[x+1][y-1] = '*';
		v[x+2][y-2] = '*';
		v[x+2][y-1] = '*';

		v[x+2][y] = '*';


		v[x + 1][y + 1] = '*';
		v[x + 2][y + 2] = '*';
		v[x + 2][y + 1] = '*';
		return;
	}

	else
	{
		f(size / 2,x, y);
		f(size / 2,x+ size/2, y -size/2);
		f(size / 2,x+ size/2, y + size/2);
	}
}

int main()
{
	int n;

	cin >> n;

	v = vector(n, vector<char>(n * 2, ' '));

	f(n, 0,n-1);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n * 2-1; j++)
		{
			cout << v[i][j];
		}
		cout << '\n';
	}
}
