#include<iostream>
#include<queue>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n, m, input, count = 0;


	cin >> t;

	for (int i = 0; i < t; i++) {
		int numList[10]{ 0, };
		bool flag = false;
		queue<pair<int, int>> printList;
		count = 0;
		cin >> n >> m;

		for (int j = 0; j < n; j++) {
			cin >> input;
			numList[input]++;
			printList.push(pair<int, int>(input, j));
		}

		for (int k = 9; k > 0; k--) {
			while (numList[k] > 0) {
				if (printList.front().first == k) {
					count++;
					numList[k]--;
					if (printList.front().second == m) {
						cout << count << '\n';
						flag = true;
						break;
					}
					printList.pop();
				}
				else {
					printList.push(pair<int, int>(printList.front().first, printList.front().second));
					printList.pop();
				}
			}
			if (flag) {
				break;
			}
		}
	}
}