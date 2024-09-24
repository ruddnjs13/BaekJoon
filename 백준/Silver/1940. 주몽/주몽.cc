#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n, m, count = 0;
	cin >> n;
	cin >> m;

	int* nList = new int[n];

	for (int i = 0; i < n; i++) {
		cin>> nList[i];
		for (int j = 0; j < i; j++) {
			if ((nList[i] + nList[j]) == m) {
				count++;
			}
		}
	}
	cout << count;
}