#include<iostream>
#include<string.h>
#include<cmath>

using namespace std;

int main()
{
	int l;
	unsigned long long answer = 0, lkw = 1;
	cin >> l;

	string input;
	cin >> input;
	for (int i = 0; i < l; i++) { 
		answer += ((input[i] - 96) * lkw);

		lkw = lkw * 31 % 1234567891;
	}

	cout << answer % 1234567891;
}