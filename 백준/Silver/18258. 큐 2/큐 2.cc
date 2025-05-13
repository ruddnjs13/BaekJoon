#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string command;

	int n;
	
	queue<int> q;
	int input;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> command;
		
		if (command == "empty") {
			cout << q.empty() ? "1" : "0";
			cout << '\n';
		}
		else if (command == "size") {
			cout << q.size() << '\n';
		}
		else if (command == "front") {
			if (q.empty() == false)
				cout << q.front() << '\n';
			else
				cout << -1 << '\n';
		}
		else if (command == "back") {
			if (q.empty() == false)
				cout << q.back() << '\n';
			else
				cout << -1 << '\n';
		}
		else if (command == "push") {
			cin >> input;
			q.push(input);
		}
		else if (command == "pop") {
			if (q.empty() == false) {
				cout << q.front() << '\n';
				q.pop();
			}
			else
				cout << -1 << '\n';
		}
	}
}