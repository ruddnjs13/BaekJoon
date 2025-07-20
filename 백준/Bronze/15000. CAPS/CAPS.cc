#include <iostream>
using namespace std;


int main()
{
    string input;

    cin >> input;

    for (auto c : input)
    {
        if (c >= 'a' && c <= 'z')
            cout << (char)(c - 32);
        else
            cout << c;
    }
    return 0;
}