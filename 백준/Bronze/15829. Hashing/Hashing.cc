#include<iostream>
#include<string.h>
#include<cmath>

using namespace std;

int main()
{
	int l, answer = 0;
	cin >> l;

	string input;
	cin >> input;
	for (int i = 0; i < l; i++) {
		answer +=  (input[i] - 96)  * pow(31,i);
	}

	cout << answer;
}