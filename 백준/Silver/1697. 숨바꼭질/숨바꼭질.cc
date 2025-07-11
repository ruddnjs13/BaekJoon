#include<iostream>
#include<vector>
#include<queue>
using namespace std;


int main()
{
	vector<int> v(100001, 0);
	
	vector<bool> isVisited(100001, 0);

	int start, key, cnt = 0;

	cin >> start >> key;

	bool flag = false;
	
	queue<int> q;

	q.push(start);
	isVisited[start] = true;

	if (start == key)
	{
		cout << 0;
		flag = true;
	}

	while (!q.empty())
	{
		if (flag) break;

		cnt++;

		int qSize = q.size();
		for (int i = 0; i < qSize; i++)
		{
			int current = q.front();
			q.pop();

			int x1, x2, x3;

			x1 = current - 1;
			x2 = current + 1;
			x3 = current * 2;

			
			if (x1 == key)
			{
				cout << cnt;
				flag = true;
				break;
			}
			else if (x2 == key)
			{
				cout << cnt;
				flag = true;
				break;
			}
			else if (x3 == key)
			{
				cout << cnt;
				flag = true;
				break;
			}


			if (x1 > 0)
			{
				if (!isVisited[x1])
				{
					q.push(x1);
					isVisited[x1] = true;
				}
			}

			if (x2 < 100001)
			{
				if (!isVisited[x2])
				{
					q.push(x2);
					isVisited[x2] = true;
				}
			}

			if (x3 < 100001)
			{
				if (!isVisited[x3])
				{
					q.push(x3);
					isVisited[x3] = true;
				}
			}
		}
	}
}
