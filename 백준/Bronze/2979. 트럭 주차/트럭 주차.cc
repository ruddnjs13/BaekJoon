#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int a, b, c;
	int answer = 0;

	cin >> a >> b >> c;

	int timeList[100] = { 0, };

	for (int i = 0; i < 3; i++) {
		int a, b;
		cin >> a >> b;
		for (int i = a - 1; i < b - 1; i++) {
			timeList[i]++;
		}
	}

	for (int i = 0; i < 100; i++) {
		if (timeList[i] == 1) {
			answer += a;
		}
		else if (timeList[i] == 2) {
			answer += b* 2;
		}
		else if (timeList[i] == 3) {
			answer += c*3;
		}
	}

	cout << answer;
}