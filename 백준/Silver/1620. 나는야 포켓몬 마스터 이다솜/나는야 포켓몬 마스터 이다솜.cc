#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	map<string, int> nameList;
	map<int, string> numList;

	int n, m;
	string name;

	cin >> n>> m;

	for (int i = 0; i < n; i++)
	{
		cin >> name;

		nameList.insert({ name, i+1 });
		numList.insert({ i+1, name});
	}

	for (int i = 0; i < m; i++)
	{
		cin >> name;

		if (isdigit(name[0]))
		{
			cout << numList[stoi(name)] << '\n';
		}
		else
		{
			cout << nameList[name] << '\n';
		}
	}
}