#include <iostream>
using namespace std;

int main()
{
	long n;
	cin >> n;

	long i = 1, sum = 0, cnt = 0;

	while (1) 
	{
		if (n - sum - i > i) {
			sum += i;
			i++;
			cnt++;
		}
		else {
			cnt++;
			break;
		}
	}
	cout << cnt;
}