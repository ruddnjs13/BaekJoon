#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
#include<unordered_map>
using namespace std;


int main()
{
	int n, input, answer = 0;

	unordered_map<int, int> m;

	queue<int> q;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;

		q.push(input);
		m[input]++;


		while (static_cast<int>(m.size()) > 2)
		{
			int temp = q.front();
			q.pop();

			if (--m[temp] == 0)
			{
				m.erase(temp);
			}
		}

		answer = max(answer, static_cast<int>(q.size()));
	}

	cout << answer;
}
