#include<iostream>
using namespace std;


int main()
{
	string nameList[100];
	string input;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		for(auto c : input) {
			cout << (char)tolower(c);
		}
		cout << '\n';
	}
}