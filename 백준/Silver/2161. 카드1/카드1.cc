#include<iostream>
#include<string.h>
#include<queue>

using namespace std;

int main()
{
	int n;
	queue<int> queue, answer;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		queue.push(i);
	}

	while (queue.size() > 1)
	{
		answer.push(queue.front());
		queue.pop();

		queue.push(queue.front());
		queue.pop();
	}
	answer.push(queue.front());

	while (!answer.empty())
	{
		cout << answer.front() << ' ';
		answer.pop();
	}
}