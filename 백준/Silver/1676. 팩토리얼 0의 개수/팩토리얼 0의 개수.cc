#include <iostream>
using namespace std;


int main() 
{
	int n;
	cin >> n;
	
	int  count2 = 0, count5 = 0;
	for (int i = 2; i <= n; i++) {
		
		int num = i;
        
		while (num % 5 == 0) {
			num /= 5;
			count5++;
		}
	}

	
	cout << count5;
}