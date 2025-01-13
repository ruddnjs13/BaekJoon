#include<iostream>
#include<unordered_set>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unordered_set<string> names;

	int n, m;
	cin >> n >> m;
	string input;
	vector<string> answers;

	for (int i = 0; i < n; i++) {
		cin >> input;
		names.insert(input);
	}
	for (int i = 0; i < m; i++) {
		cin >> input;
		if (names.count(input) > 0) {
			answers.push_back(input);
		}
	}

	cout << answers.size() << '\n';

	sort(answers.begin(), answers.end());
	for (auto c : answers) {
		cout << c << '\n';
	}
}