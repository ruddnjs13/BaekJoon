#include<iostream>
#include<string>
#include <vector>

using namespace std;

struct  People
{
	int weight, height;
};

static bool ComaprePeople(People a, People b) 
{
	if ((a.weight < b.weight) && (a.height < b.height)) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	int t;
	cin >> t;
	string answer;

	People *peopleList = new People[t];

	for (int i = 0; i < t; i++) {
		cin >> peopleList[i].weight >> peopleList[i].height;
	}

	for (int i = 0; i < t; i++) {
		int idx = 1;
		for (int j = 0; j < t; j++) {
			if (ComaprePeople(peopleList[i], peopleList[j])) {
				idx++;
			}
		}
		answer += to_string(idx) + " ";
	}
	cout << answer;

   
}