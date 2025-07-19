#include <iostream>
using namespace std;


int main()
{
    string str;
    string tmp;
    char c;

    int n;

    cin >> n;

    cin >> str;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> tmp;
        for (int j = 0; j < tmp.length(); j++)
        {
            c = tmp[j];
            if (c != str[j])
            {
                str[j] = '?';
            }
        }
    }

    cout << str;

    return 0;
}