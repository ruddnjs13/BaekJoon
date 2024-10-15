#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	double n = 0, avg, sum = 0, input;
	cin >> n;
	vector<double> scores;

	avg = round((n) * 0.15f);
	for (int i = 0; i < n; i++) 
	{
		cin >> input;
		scores.push_back(input);
	}
	sort(scores.begin(), scores.end());
	for (int i = avg; i < n-avg; i++) 
	{
		sum += scores[i];
	}
	if (!scores.empty())
		cout << round(sum / (n - avg * 2));
	else
		cout << 0;
}