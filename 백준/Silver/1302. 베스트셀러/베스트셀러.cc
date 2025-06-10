#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	map<string, int> bookList;

	int n;
	string name;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> name;

		if (bookList.find(name) != bookList.end())
		{
			bookList[name]++;
		}
		else
		{
			bookList.insert({ name, 1 });
		}
	}

	string answer;
	int max = 0;

	for (auto i : bookList)
	{
		if (i.second > max)
		{
			max = i.second;
			answer = i.first;
		}
	}

	cout << answer;
}