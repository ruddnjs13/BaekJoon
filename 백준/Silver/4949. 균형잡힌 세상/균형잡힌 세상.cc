#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
	string input;

	while (true)
	{
		getline(cin, input);
		if (input == ".") {
			break;
		}
		stack<char> checkList;
		bool flag = false;

		for (int i = 0; i < input.size(); i++) {
			if (input[i] == '(' || input[i] == '[') {
				checkList.push(input[i]);
			}
			if (input[i] == ')') {
				if (!checkList.empty() && checkList.top() == '(') {
						checkList.pop();
					}
					else {
						flag = true;
						break;
					}
			}
			if (input[i] == ']') {
				if (!checkList.empty() && checkList.top() == '[') {
						checkList.pop();
					}
					else {
						flag = true;
						break;
					}
			}
		}
		if (!flag && checkList.empty()) {
			cout << "yes" << '\n';
		}
		else {
			cout << "no" << '\n';
		}
	}
}