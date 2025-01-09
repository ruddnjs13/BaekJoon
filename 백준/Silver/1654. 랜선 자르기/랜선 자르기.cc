#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long k, n, input = 0, max= -1;
	cin >> k >> n;

	int* inputList = new int[k];

	for (int i = 0; i < k; i++) {
		cin >> input;
		inputList[i] = input;
		if (inputList[i] > max) {
			max = inputList[i];
		}
	}

	long long low = 1, high = max, mid = 0;

	while (low <= high) {
		mid = (low + high) / 2;
		int count = 0;
		for (int i = 0; i < k; i++) {
			count += inputList[i] / mid;
		}
		if (count >= n) {
			low = mid+1;
		}
		else {
			high = mid-1;
		}
	}
	cout << high;
}