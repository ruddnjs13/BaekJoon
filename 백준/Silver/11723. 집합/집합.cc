#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	bool s[21]{ false, };
	int m, input;
	string command;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> command;
		if (command == "add") {
			cin >> input;
			s[input] = true;
		}
		else if (command == "remove") {
			cin >> input;
			s[input] = false;
		}
		else if (command == "check") {
			cin >> input;
			cout << (s[input] ? 1 : 0) << '\n';
		}
		else if (command == "toggle") {
			cin >> input;
			s[input] = !s[input];
		}
		else if (command == "all") {
			for (int j = 1; j <= 20; j++) {
				s[j] = true;
			}
		}
		else if (command == "empty") {
			for (int j = 1; j <= 20; j++) {
				s[j] = false;
			}
		}
	}
}