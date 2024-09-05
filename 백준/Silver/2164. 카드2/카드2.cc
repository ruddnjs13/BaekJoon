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
		queue.pop();

		queue.push(queue.front());
		queue.pop();
	}
	cout << queue.front();
}