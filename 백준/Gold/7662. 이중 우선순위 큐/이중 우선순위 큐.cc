#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main()
{
	int t, k, input;
	char command;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		priority_queue<int>  maxQ;
		priority_queue<int, vector<int>, greater<int>> minQ;
		unordered_map<int, int> checkList;

		cin >> k;

		for (int j = 0; j < k; j++)
		{
			cin >> command >> input;

			if (command == 'I')
			{
				maxQ.push(input);
				minQ.push(input);
				checkList[input]++;
			}
			else
			{
				if (minQ.empty() || maxQ.empty()) continue;


				else if (input == 1)
				{
					while (!maxQ.empty())
					{
						int val = maxQ.top();
						if (checkList[val] > 0)
						{
							maxQ.pop();
							checkList[val]--;
							if (checkList[val] == 0) checkList.erase(val);
							break;
						}
						maxQ.pop();
					}
					
				}
				else
				{
					while (!minQ.empty())
					{
						int val = minQ.top();
						if (checkList[val] > 0)
						{
							minQ.pop();
							checkList[val]--;
							if (checkList[val] == 0) checkList.erase(val);
							break;
						}
						minQ.pop();
					}
				}
			}
		}

		while (!maxQ.empty() && checkList.find(maxQ.top()) == checkList.end())
		{
			maxQ.pop();
		}
		while (!minQ.empty() && checkList.find(minQ.top()) == checkList.end())
		{
			minQ.pop();
		}

		if (minQ.empty() || maxQ.empty())
			cout << "EMPTY\n";
		else
			cout << maxQ.top() << ' ' << minQ.top() << '\n';
	}
}
