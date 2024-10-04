#include<iostream>
#include<string>

using namespace std;

int main()
{
	string input;

	cin >> input;

	int checkList[26] = { 0, };

	for (int i = 0; i < input.size(); i++) {
		if (input[i] <= 'z' && input[i] >= 'a') {
			checkList[input[i] - 'a']++;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << checkList[i] << ' ';
	}
}