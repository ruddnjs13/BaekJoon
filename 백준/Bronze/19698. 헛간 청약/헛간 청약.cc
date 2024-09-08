#include<iostream>

using namespace std;

int main()
{
	int n, w, h, l;
	cin >> n >> w >> h >> l;
	int maxcow = (w / l) * (h / l);
	cout << (maxcow > n ? n : maxcow);
}