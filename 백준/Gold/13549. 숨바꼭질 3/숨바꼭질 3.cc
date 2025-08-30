#include<iostream>
#include<vector>
#include<queue>
using namespace std;


int main()
{
	int inf = 9999999;

	vector<int> dist(100001, inf);
	

	int start, key;

	cin >> start >> key;

	deque<int> q;

	q.push_back(start);

	dist[start] = 0;

	while (!q.empty())
	{
		int x1, x2, x3;

		int current = q.front();
		q.pop_front();

		if (current == key)
		{
			cout << dist[key];
			break;
		}

		x1 = current * 2;

		if (x1 < 100001 && dist[x1] == inf)
		{
			dist[x1] = dist[current];
			q.push_front(x1);
		}

		x2 = current - 1;
		x3 = current + 1;

		if (x2 >= 0 && dist[x2] == inf)
		{
			dist[x2] = dist[current] + 1;
			q.push_back(x2);
		}
		if (x3 < 100001 && dist[x3] == inf)
		{
			dist[x3] = dist[current] + 1;
			q.push_back(x3);
		}
	}
}
