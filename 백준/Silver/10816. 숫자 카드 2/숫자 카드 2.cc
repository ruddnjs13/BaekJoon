#include<iostream>
#include<map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int n, m, input;
	map<int, int> numList;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		numList[input]++;
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> input;
		cout << numList[input] << ' ';
	}
}