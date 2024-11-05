#include<iostream>
#include<queue>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long n, sum = 1, answer = 0;
	cin >> n;

	for (int i = 0; i < n - 2; i++) {
		answer += sum;

		sum += i + 2;
	}

	cout << answer << '\n';
	cout << 3;

}