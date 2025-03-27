#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int dp[1004]{ 0,0,1 };
	int n;
	cin >> n;
	for (int i = 2; i < n; i++) {
		dp[i + 1] = dp[i] < 1 ? 1 : 0;
		dp[i + 3] = dp[i] < 1 ? 1 : 0;
	}

	if (dp[n] == 0) {
		cout << "SK";
	}
	else {
		cout << "CY";
	}
}
