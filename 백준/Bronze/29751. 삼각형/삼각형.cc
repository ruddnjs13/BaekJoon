#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cout.precision(1);
	cout.setf(ios::fixed);
	float w, h;
	cin >> w >> h;

	cout << (w*h) /2.0;
}