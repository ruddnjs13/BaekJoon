#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	double d1, d2;
	double PI = 3.141592;
	cin >> d1 >> d2;

	cout << fixed;
	cout.precision(6);
	cout << (2.0f * PI * d2) + 2.0f * d1;
}