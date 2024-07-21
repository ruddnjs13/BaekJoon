#include <iostream>
using namespace std;

int main()
{
	int n;
	int cnt = 0;

	cin >> n;

	while (n > 0) {

		for (int i = 64; ; i /= 2) 
		{
			if (i <= n) {
				cnt++;
				n -= i;
				break;
			}
		}
	}
	cout << cnt;
	return 0;
}