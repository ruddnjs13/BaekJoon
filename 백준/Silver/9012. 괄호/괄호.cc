#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
	string input;
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> input;
		stack<char> checkList;
		bool flag = false;

		for (int j = 0; j < input.size(); j++) {
			if (input[j] == '(' || input[j] == '[') {
				checkList.push(input[j]);
			}
			if (input[j] == ')') {
				if (!checkList.empty() && checkList.top() == '(') {
					checkList.pop();
				}
				else {
					flag = true;
					break;
				}
			}
		}
		if (!flag && checkList.empty()) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
	}
}