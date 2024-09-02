#include<iostream>
#include<string>

using namespace std;

int main()
{
	string input[3];
	cin >> input[0] >> input[1] >> input[2];

	int num;

	if (input[0][0] >='0' && input[0][0] <= '9') {
		num = stoi(input[0]) + 3;
	}
	else if (input[1][0] >= '0' && input[1][0] <= '9') {
		num = stoi(input[1]) + 2;
	}
	else {
		num = stoi(input[2]) + 1;
	}

	if (num % 3 == 0 && num % 5 == 0) {
		cout << "FizzBuzz";
	}
	else if (num % 3 == 0) {
		cout << "Fizz";
	}
	else if (num % 5 == 0) {
		cout << "Buzz";
	}
	else {
		cout << num;
	}
}