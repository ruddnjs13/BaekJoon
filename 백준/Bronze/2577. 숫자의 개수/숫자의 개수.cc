#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	int num = a * b * c;

	int checkArr[10]{ 0, };

	for (int i = 0; i < to_string(num).length(); i++) {
		int arrIdx = (int)to_string(num)[i] - 48;
		checkArr[arrIdx]++;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << checkArr[i] << '\n';
	}

}