#include<iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int n;
	string input;
	vector<int> stack = vector<int>();
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input == "push") {
			int num;
			cin >> num;
			stack.push_back(num);
		}
		if (input == "pop") {
			if (stack.empty()) {
				cout << -1 << '\n';
				continue;
			}
			cout << stack.back() << '\n';
			stack.erase(stack.end() - 1);
		}
		if (input == "size") {
			cout << stack.size() << '\n';
		}
		if (input == "empty") {
			cout << (stack.empty() ? "1\n" : "0\n");
		}
		if (input == "top") {
			if (stack.empty()) {
				cout << -1 << '\n';
				continue;
			}
			cout << stack.back() << '\n';
		}
	}
}