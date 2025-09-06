	#include <iostream>
	#include <map>
	using namespace std;


	int main()
	{
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);

		char c;

		cin >> c;

		map<char, string> map;

		map.insert({ 'M',"MatKor" });
		map.insert({ 'W',"WiCys" });
		map.insert({ 'C',"CyKor" });
		map.insert({ 'A',"AlKor" });
		map.insert({ '$',"$clear" });

		cout << map[c];

		return 0;
	}