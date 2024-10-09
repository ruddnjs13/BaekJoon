#include<iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n, idx = 0;
	string input;
	vector<int> queue;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input == "push") {
			int num;
			cin >> num;
			queue.push_back(num);
		}
		if (input == "pop") {
			if (queue.empty()) {
				cout << -1 << '\n';
				continue;
			}
			cout << queue.front() << '\n';
			queue.erase(queue.begin());
		}
		if (input == "size") {
			cout << queue.size() << '\n';
		}
		if (input == "empty") {
			cout << (queue.empty() ? 1 : 0) << '\n';
		}
		if (input == "front") {
			if (queue.empty()) {
				cout << -1 << '\n';
				continue;
			}
			cout << queue.front() << '\n';
		}
		if (input == "back") {
			if (queue.empty()) {
				cout << -1 << '\n';
				continue;
			}
			cout << queue.back() << '\n';
		}
	}
}