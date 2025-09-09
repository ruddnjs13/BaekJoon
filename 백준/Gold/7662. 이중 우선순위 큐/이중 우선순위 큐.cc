#include <iostream>
#include <set>
using namespace std;

int main() {
	int t, n, num;
	char c;

	cin >> t;

	

	for (int i = 0; i < t; i++) {
		cin >> n;

		multiset<int> ms;

		for (int j = 0; j < n; j++) {
			cin >> c >> num;

			if (c == 'I') {
				ms.insert(num);
			}
			else if (c == 'D') {
				if (ms.empty()) continue;

				if (num == 1) {
					ms.erase(prev(ms.end()));
				}
				else if (num == -1) {
					ms.erase(ms.begin());
				}
			}
		}

		if (ms.empty()) {
			cout << "EMPTY" << '\n';
		}
		else {
			cout << *prev(ms.end())<< ' ' << *ms.begin() << '\n';
		}
	}
}