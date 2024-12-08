#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, sum = 0, input, mid, maxModeValue = 1, range = 0, mode = 0;
	vector<int> numLIst, modeCheckList;
	int modeList[8001]{0,};
	float avg;

	cin >> n;


	for (int i = 0; i < n; i++) {
		cin >> input;
		sum += input;
		numLIst.push_back(input);
		modeList[input+4000]++;
	}

	sort(numLIst.begin(), numLIst.end());

	mid = numLIst[n / 2];
	range = numLIst.back() - numLIst.front();
	avg = round(sum / (float)n);

	for (int i = 0; i < 8001; i++) {
		if (modeList[i] > maxModeValue) {
			modeCheckList.clear();
			maxModeValue = modeList[i];
			modeCheckList.push_back(i-4000);
		}
		else if (modeList[i] >= maxModeValue) {
			modeCheckList.push_back(i-4000);
		}
	}

	sort(modeCheckList.begin(), modeCheckList.end());

	if (modeCheckList.size() < 2) {
		mode = modeCheckList[0];
	}
	else {
		mode = modeCheckList[1];
	}
	cout << avg + 1 - 1 << '\n' << mid << '\n' << mode << '\n' << range;
}