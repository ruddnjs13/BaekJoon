#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <string>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;

    while (true)
    {
        getline(cin, input);
        if (input == ".") break;
        stack<char> s;

        for (auto c : input)
        {
            if (c == '(' || c == '[')
            {
                s.push(c);
            }
            else if (c == ')')
            {
                if (!s.empty() && s.top() == '(')
                    s.pop();
                else
                {
                    s.push(c);
                    break;
                }
            }
            else if (c == ']')
            {
                if (!s.empty() && s.top() == '[')
                    s.pop();
                else
                {
                    s.push(c);
                    break;
                }
            }
        }
        if (s.empty())
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }

    return 0;
}
