#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int main()
{
	int n, input, sum = 0;

	cin >> n;

	priority_queue<int> pq;

	for (int i = 0; i < n; i++)
	{
		cin >> input;

		pq.push(-input);
	}

	while (pq.size() >1)
	{
		int num1 = -pq.top();
		pq.pop();


		int num2 = -pq.top();
		pq.pop();

		sum += num1 + num2;
		pq.push(-(num1 + num2));
	}

	cout << sum;
}
