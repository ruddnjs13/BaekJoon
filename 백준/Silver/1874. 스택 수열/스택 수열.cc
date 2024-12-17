#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, input = 0;
	string answer;
	stack<int> numlist;
	stack<int> checkList;

	bool flag = false;

	cin >> n;

	int* sequence = new int[n];
	for (int i = 0; i < n; i++) {
		numlist.push(n-i);
		cin >> input;
		sequence[i] = input;
	}


	for (int i = 0; i < n; i++) {
		while (checkList.empty() || sequence[i] != checkList.top()) {
			if (numlist.empty()) {
				cout << "NO";
				flag = true;
				break;
			}
			checkList.push(numlist.top());
			numlist.pop();
			answer += "+";
		}
		if (flag) {
			break;
		}
		checkList.pop();
		answer += "-";
	}

	if (!flag) {
		for (auto c : answer) {
			cout << c << '\n';
		}
	}

}