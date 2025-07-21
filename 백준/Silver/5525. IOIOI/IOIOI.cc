#include <iostream>
using namespace std;


int main()
{
    int n, m, start = 0, answer = 0;

    string s, findStr;

    cin >> n >> m >> s;

    for (int i = 0; i < 2* (n+1)-1; i++)
    {
        if (i % 2 == 0)
            findStr += 'I';
        else
            findStr += 'O';
    }

    while (true)
    {
        int temp = s.find(findStr, start);
        if (temp == string::npos) break;
        start = temp + 1;

        answer++;
    }

    cout << answer;

    return 0;
}