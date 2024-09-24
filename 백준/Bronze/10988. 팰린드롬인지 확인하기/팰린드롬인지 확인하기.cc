#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string input;
	cin >> input;

	bool flag = false;

	int i = 0, j = input.size() - 1;

	while (i <= j) {
		if (input[i] != input[j]) {
			flag = true;
		}
		i++;
		j--;
	}

	if (flag) {
		cout << 0;
	}
	else {
		cout << 1;
	}
}