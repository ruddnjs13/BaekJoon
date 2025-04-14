	#include<iostream>
	#include<vector>
	#include<string>
	#include<cmath>
	using namespace std;


	int main()
	{
		ios::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);

		int n, cnt = 0;

		cin >> n;

		vector<int> dp (121, 0);
		vector<int> dp1 (121, 0);

		dp[1] = 1;
		dp[2] = 4;
		dp[3] = 10;

		dp1[1] = 1;
		dp1[2] = 3;
		dp1[3] = 6;

		// 300000만보다 작은 사면체의 값 dp
		for (int i = 4; i <= 120; i++) {
			dp1[i] = dp1[i - 1] + i;
			dp[i] = dp[i-1] + dp1[i];	
		}

		vector<int> counts(300001, 0);

		counts[2] = 2;
		counts[3] = 3;
		for (int i = 1; i <= 120; i++) {
			counts[dp[i]] = 1;
		}

		for (int i = 5; i <= 300000; i++) {
			if (counts[i] == 1) {
				continue;
			}

			int minValue = 9999999;

			for (int j = 1; j <= 120; j++) {
				if (i - dp[j] <= 0) {
					break;
				}
				minValue = min(counts[i - dp[j]] + 1, minValue);
			}
			counts[i] = minValue;
		}


		cout << counts[n];
	}