#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

//void F(int n, int originNum) {
//	if (n < 1) {
//		return;
//	}
//	if (n > 5) {
//		return;
//	}
//	for (int i = 0; i < originNum - n; i++) {
//		cout << ' ';
//	}
//	for (int i = 0; i< n; i++) {
//		cout << '*' << ' ';
//	}
//	for (int i = 0; i < originNum - n; i++) {
//		cout << ' ';
//	}
//	cout << '\n';
//	F(n - 1,originNum);
//	for (int i = 0; i < originNum - n; i++) {
//		cout << ' ';
//	}
//	for (int i = 0; i < n; i++) {
//		cout << '*' << ' ';
//	}
//	for (int i = 0; i < originNum - n; i++) {
//		cout << ' ';
//	}
//	cout << '\n';
//}

int main()
{
#pragma region 1
	/*string input1, input2, answer;

	getline(cin, input1);
	getline(cin, input2);

	for (int i = 0; i < input1.size(); i++) {
		if (input1[i] != ' ') {
			answer += input1[i];
		}
	}
	for (int i = 0; i < input2.size(); i++) {
		if (input2[i] != ' ') {
			answer += input2[i];
		}
	}

	cout << answer;*/
#pragma endregion

#pragma region 2
	/*int n, m, count = 0;

	cin >> n >> m;

	int** answer = new int* [n];
	for (int i = 0; i < n; i++) {
		answer[i] = new int[m];
	}



	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < m; j++) {
				answer[j][i] = count++;
			}
		}
		else {
			for (int j = n-1; j >=0; j--) {
				answer[j][i] = count++;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << answer[i][j] << ' ';
		}
		cout << '\n';
	}*/
#pragma endregion

#pragma region 3
	/*int n, m;
	cin >> n >> m;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < m; i++) {
		int maxIndex = 0;
		for (int j = 0; j < n; j++) {
			if (arr[j] >= arr[maxIndex]) {
				maxIndex = j;
			}
		}
		arr[maxIndex]--;
	}

	int max = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << max;*/
#pragma endregion

#pragma region 4
	/*int n;
	cin >> n;
	F(n, n);*/
#pragma endregion

#pragma region 5

	/*int min = 2147483647;
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				continue;
			}
			if (arr[i] - arr[j] < min && arr[i] - arr[j] > 0) {
				min = arr[i] - arr[j];
			}
		}
	}
	cout << min;*/

#pragma endregion
#pragma region 6
//char c;
//cin >> c;
//
//if (c - 1 < 97) {
//	cout << (char)(122 - (c - 97));
//}
//else {
//	cout << (char)(c - 1);
//}
#pragma endregion
#pragma region 7
//int a;
//char b;
//cin >> b >> a;
//cout << (int)b << ' ' << (char)a;
#pragma endregion

#pragma region 8

string input;
getline(cin, input);

for (int i = 0; i < input.size(); i++) {
	if (input[i] >= 'a' && input[i] <= 'z') {
		int num = input[i] + 13;
		if (num > 122) {
			num = 97 + (num - 123);
		}
		input[i] = (char)num;
	}
	else if (input[i] >= 'A' && input[i] <= 'Z') {
		int num = input[i] + 13;

		if (num > 90) {
			num = 65 + (num - 91);
		}
		input[i] = (char)num;
	}
}

cout << input;
#pragma endregion

}