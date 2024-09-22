#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
	stack<int> numList;

	int n, input, sum = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input == 0) {
			numList.pop();
		}
		else {
			numList.push(input);
		}
	}
	while (!numList.empty()) {
		sum += numList.top();
		numList.pop();
	}

	cout << sum;
}