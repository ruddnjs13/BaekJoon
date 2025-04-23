#include<iostream>
#include<queue>
using namespace std;

int main()
{
	int n, k;
	queue<int> peopleList;

	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		peopleList.push(i);
	}

	cout << "<";

	while (!peopleList.empty()) {
		for (int i = 0; i < k-1; i++) {
			peopleList.push(peopleList.front());
			peopleList.pop();
		}
		cout << peopleList.front();
		peopleList.pop();

		if (peopleList.size() > 0) {
			cout << ", ";
		}
	}
	cout << ">";

}